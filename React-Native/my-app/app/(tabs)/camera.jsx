import React, { useState } from 'react';
import { Text, View, Button, StyleSheet } from 'react-native';
import { CameraView, useCameraPermissions } from 'expo-camera';

const App = () => {
  const [permission, requestPermission] = useCameraPermissions();
  const [facing, setFacing] = useState('back');

  // Permission screen
  if (!permission?.granted) {
    return (
      <View style={styles.permissionContainer}>

        <Text style={styles.permissionText}>
          Camera Permission Required
        </Text>

        <Button
          color="red"
          title="Allow Camera"
          onPress={requestPermission}
        />

      </View>
    );
  }

  // Camera screen
  return (
    <View style={styles.cameraContainer}>
      <CameraView
        style={styles.camera}
        facing={facing}
      />
      <View style={styles.buttonContainer}>
        <Button
          title="Flip Camera"
          onPress={() => {
            if (facing === 'back') {
              setFacing('front');
            } 
            else {
              setFacing('back');
            }
          }}
        />
      </View>

    </View>
  );
};

const styles = StyleSheet.create({

  permissionContainer: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center'
  },

  permissionText: {
    fontSize: 20,
    marginBottom: 20
  },

  cameraContainer: {
    flex: 1
  },

  camera: {
    flex: 1
  },

  buttonContainer: {
    position: 'absolute',
    bottom: 40,
    alignSelf: 'center'
  }

});

export default App;