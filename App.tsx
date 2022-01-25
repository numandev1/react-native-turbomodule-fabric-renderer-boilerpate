import React from 'react';
import type {Node} from 'react';
import {SafeAreaView, useColorScheme, StyleSheet, Alert} from 'react-native';

import {Colors} from 'react-native/Libraries/NewAppScreen';
import Button from 'react-native/Libraries/Components/Button';
import MyApplicationLibrary from './Libraries/NativeMyApplicationLibrary';
// import MyApplicationTurboCxxModule from './Libraries/NativeMyApplicationTurboCxxModule';
const App: () => Node = () => {
  const isDarkMode = useColorScheme() === 'dark';

  const backgroundStyle = {
    backgroundColor: isDarkMode ? Colors.darker : Colors.lighter,
  };

  const testHandler = async () => {
    const response = await MyApplicationLibrary.getString('hello world ');
    console.log(response);
    // const response2 = await MyApplicationTurboCxxModule.getConstants();
    // console.log(response2);
  };

  return (
    <SafeAreaView style={[styles.container, backgroundStyle]}>
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
    justifyContent: 'center',
    alignItems: 'center',
  },
});
