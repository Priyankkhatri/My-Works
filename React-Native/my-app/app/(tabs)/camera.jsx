import React from 'react';
import { Text, View, Button, StyleSheet } from 'react-native';
import { CameraView, useCameraPermissions } from 'expo-camera';

const App = () => {

  const [permission, requestPermission] = useCameraPermissions();

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

  return (
    <CameraView style={styles.camera} />
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

  camera: {
    flex: 1
  }

});

export default App;