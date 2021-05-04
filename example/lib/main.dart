import 'package:flutter/material.dart';
import 'package:ondato_flutter/ondato_config.dart';
import 'package:ondato_flutter/ondato_flutter.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    const YOUR_ACCESS_TOKEN = '';
    const YOUR_IDENTIFICATION_ID = '';

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Ondato Fluttter plugin example app'),
        ),
        body: Center(
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: [
              TextButton(
                  onPressed: () async {
                    await OndatoFlutter.init(
                      OndatoServiceConfiguration(
                        credentials: OndataCredencials(
                            accessToken: YOUR_ACCESS_TOKEN,
                            identificationId: YOUR_IDENTIFICATION_ID),
                        mode: OndatoEnvironment.test,
                        appearance: OndatoIosAppearance(
                          buttonColor: Colors.amber,
                        ),
                      ),
                    );
                    await OndatoFlutter.startIdentification()
                        .then((e) => print(e))
                        .catchError((e) => print(e));
                  },
                  child: Text('Start Identification'))
            ],
          ),
        ),
      ),
    );
  }
}
