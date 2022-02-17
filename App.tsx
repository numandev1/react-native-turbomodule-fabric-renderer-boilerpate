import React, {useState} from 'react';
import {
  SafeAreaView,
  useColorScheme,
  StyleSheet,
  Dimensions,
  Text,
} from 'react-native';

import {Colors} from 'react-native/Libraries/NewAppScreen';
import Button from 'react-native/Libraries/Components/Button';
import MyApplicationLibrary from './Libraries/NativeMyApplicationLibrary';
// import MyApplicationTurboCxxModule from './Libraries/NativeMyApplicationTurboCxxModule';
const {width, height} = Dimensions.get('screen');
const App: () => Node = () => {
  const isDarkMode = useColorScheme() === 'dark';
  const [log, setLog] = useState('');
  const makeLog = (obj: any) => {
    let logStr = '';
    for (let [key, value] of Object.entries(obj)) {
      logStr += `\n\n${key} : ${value}`;
    }
    setLog(logStr);
  };

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  const testHandler = async () => {
    const response = await MyApplicationLibrary.getString('hello world ');
    console.log(response);
    makeLog({response});
    // const response2 = await MyApplicationTurboCxxModule.getConstants();
    // console.log(response2);
  };

  return (
    <SafeAreaView style={[styles.container, backgroundStyle]}>
      <Text style={styles.textInput}>{log}</Text>
      <Button
        onPress={testHandler}
        title="click here to test turbo module"
        color="red"
      />
    </SafeAreaView>
  );
};

export default App;

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
  },
  textInput: {
    height: height * 0.4,
    width: width,
    borderColor: 'gray',
    borderWidth: 5,
    fontSize: 20,
    padding: 5,
    marginBottom: 100,
  },
});
