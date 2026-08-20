import React, { useState } from 'react';
import { Text, View, Button, StyleSheet } from 'react-native';
import { CameraView, useCameraPermissions } from 'expo-camera';

const App = () => {
  const [permission, requestPermission] = useCameraPermissions();
  const [facing, setFacing] = useState('back');
  const [zoom, setZoom] = useState(0);

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
        zoom={zoom}
      />

      {/* Flip Camera */}
      <View style={styles.buttonContainer}>
        <Button
          title="Flip Camera"
          onPress={() => {
            if (facing === 'back') {
              setFacing('front');
            } else {
              setFacing('back');
            }
          }}
        />
      </View>

      {/* Zoom Controls */}
      <View style={styles.zoomContainer}>

        {/* Current Zoom */}
        <View style={styles.zoomDisplay}>
          <Text style={styles.zoomText}>
            {zoom.toFixed(1)}x
          </Text>
        </View>

        {/* + and - buttons */}
        <View style={styles.zoomButtons}>

          <View style={styles.zoomButton}>
            <Button
              title="-"
              onPress={() => {
                setZoom(prev => {
                  if (prev > 0) {
                    return prev - 0.1;
                  }

                  return prev;
                });
              }}
            />
          </View>

          <View style={styles.zoomButton}>
            <Button
              title="+"
              onPress={() => {
                setZoom(prev => {
                  if (prev < 1) {
                    return prev + 0.1;
                  }

                  return prev;
                });
              }}
            />
          </View>

        </View>

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
  },

  zoomContainer: {
    position: 'absolute',
    bottom: 100,
    alignSelf: 'center',
    alignItems: 'center'
  },

  zoomDisplay: {
    marginBottom: 10
  },

  zoomText: {
    color: 'white',
    fontSize: 20,
    fontWeight: 'bold'
  },

  zoomButtons: {
    flexDirection: 'row',
    gap: 10
  },

  zoomButton: {
    width: 60,
    height: 60
  }

});

export default App;