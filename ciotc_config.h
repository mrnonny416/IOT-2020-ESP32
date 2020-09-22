/******************************************************************************
 * Copyright 2018 Google
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
// This file contains your configuration used to connect to Cloud IoT Core

// Wifi newtork details.
const char *ssid = "SSID";
const char *password = "PASSWORD";

// Cloud iot details.
const char *project_id = "db-iot-290306";
const char *location = "asia-east1";
const char *registry_id = "DB-IOT2020";
const char *device_id = "IOT-01";

// To get the private key run (where private-key.pem is the ec private key
// used to create the certificate uploaded to google cloud iot):
// openssl ec -in <private-key.pem> -noout -text
// and copy priv: part.
// The key length should be exactly the same as the key length bellow (32 pairs
// of hex digits). If it's bigger and it starts with "00:" delete the "00:". If
// it's smaller add "00:" to the start. If it's too big or too small something
// is probably wrong with your key.
const char *private_key_str =
    "46:81:7b:4d:a6:6f:b8:e3:72:63:ff:25:48:23:64:"
    "a6:88:6d:85:dd:18:f5:01:af:e7:58:7c:ab:19:e1:"
    "e7:54";

// To get the certificate for your region run:
// openssl s_client -showcerts -connect mqtt.googleapis.com:8883
// Copy the certificate (all lines between and including ---BEGIN CERTIFICATE---
// and --END CERTIFICATE--) to root.cert and put here on the root_cert variable.

const char *root_cert =
    "-----BEGIN CERTIFICATE-----\n"
"MIIFtTCCBJ2gAwIBAgIQZERAbMMDPY0CAAAAAHljVjANBgkqhkiG9w0BAQsFADBC\n"
"MQswCQYDVQQGEwJVUzEeMBwGA1UEChMVR29vZ2xlIFRydXN0IFNlcnZpY2VzMRMw\n"
"EQYDVQQDEwpHVFMgQ0EgMU8xMB4XDTIwMDgyNjA4MDMwNFoXDTIwMTExODA4MDMw\n"
"NFowbTELMAkGA1UEBhMCVVMxEzARBgNVBAgTCkNhbGlmb3JuaWExFjAUBgNVBAcT\n"
"DU1vdW50YWluIFZpZXcxEzARBgNVBAoTCkdvb2dsZSBMTEMxHDAaBgNVBAMTE21x\n"
"dHQuZ29vZ2xlYXBpcy5jb20wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB\n"
"AQDEMEY8njSWQCrbOnJjOchOiCCEtrF37aUwsOpzRyR7Ek9D+3MTcyZcyFSmE97s\n"
"FToysgoVj9ugXEROFHPW5yk7u7xAN9f1IFbpyIbDqBvxJNDGV3hXt5N4szTcP71R\n"
"LK3At5kVWtnya8DOzocA8gXwE7HTj8QTas8E2FoKDio1zNtSXjntqsbffsBDpZnC\n"
"jXxo6IBaJ1x+5Kx2t1QYV013Io1RJGdAkrLcuoCgKmBf6g4PvDemIbLlWrqDikIM\n"
"fdeW3DhqP6neY+S29Y/EvOo2tFtL7IcvcHqipXI6rVFK3FXuB3iAN8RFsNxRdOdc\n"
"oQp39aiPV5UhLfAkNM33IpdnAgMBAAGjggJ6MIICdjAOBgNVHQ8BAf8EBAMCBaAw\n"
"EwYDVR0lBAwwCgYIKwYBBQUHAwEwDAYDVR0TAQH/BAIwADAdBgNVHQ4EFgQUdQGj\n"
"BsqDoJtWziadn+xWvEZ8lbIwHwYDVR0jBBgwFoAUmNH4bhDrz5vsYJ8YkBug630J\n"
"/SswaAYIKwYBBQUHAQEEXDBaMCsGCCsGAQUFBzABhh9odHRwOi8vb2NzcC5wa2ku\n"
"Z29vZy9ndHMxbzFjb3JlMCsGCCsGAQUFBzAChh9odHRwOi8vcGtpLmdvb2cvZ3Ny\n"
"Mi9HVFMxTzEuY3J0MDgGA1UdEQQxMC+CE21xdHQuZ29vZ2xlYXBpcy5jb22CGG1x\n"
"dHQtbXRscy5nb29nbGVhcGlzLmNvbTAhBgNVHSAEGjAYMAgGBmeBDAECAjAMBgor\n"
"BgEEAdZ5AgUDMDMGA1UdHwQsMCowKKAmoCSGImh0dHA6Ly9jcmwucGtpLmdvb2cv\n"
"R1RTMU8xY29yZS5jcmwwggEDBgorBgEEAdZ5AgQCBIH0BIHxAO8AdQDnEvKwN34a\n"
"LRszpQpGJsP1cmTxsAB2AAe3XBvlfWj/8bDGHSMVx7rmV3xXlLdq7rxhOhpp06Ic\n"
"AAABdCoBp+kAAAQDAEcwRQIhAJu9DNZw2hPI/ab7quqIDYe1dRRc1UY9hOAMPy11\n"
"+8/LAiBIor1eyQh47JWylahWx2a7BUThXYZbnY/vQnS2AtHFRjANBgkqhkiG9w0B\n"
"AQsFAAOCAQEAOdk7Av3jC72cZuFqI9MCcl8r/7pxXpYQLCiJziKTXZZtTk5mq9WO\n"
"/M2QdWYxzfFhgFz4y7rTl78L4A4R7UL388qvP9yWQGseJJh9xs1GDVQ5j/ia1mzc\n"
"u96ZDtJ6wbXYduyBzCDKyLX/GJZdBL1QqhmhcqVsSGE5HChClLzUe46rJt1tmo22\n"
"LN2REsUXSWqqG7lIKCsdDj3sHMbZVwPfeS9HRlvqe5TdIp2IcjWYQPXwpRDF0Clc\n"
"ziBpkuRCsLLrospfioIg6E8tK8p3QrzYhnGHqbrRDaDZA0CS/h7+rYEL7K6kaI17\n"
"IzkgTIB+SDkBpnVLx1mQ+MRo1dIMEBE21g==\n"
"-----END CERTIFICATE-----\n";
