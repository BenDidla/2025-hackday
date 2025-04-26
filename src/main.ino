// Function prototypes from gemini.ino
void connectWiFi();
String callGeminiAPI(String prompt);

void setup() {
    Serial.begin(9600);
    while (!Serial); // Wait for serial port to connect needed for native USB port only

    Serial.println("Gemini API Arduino Example");
    connectWiFi(); // Connect to WiFi

    // Example usage: Call Gemini API once in setup
    Serial.println("\n--- Calling Gemini API ---");
    String prompt = "Explain what an Arduino is in simple terms.";
    Serial.print("Prompt: ");
    Serial.println(prompt);

    String result = callGeminiAPI(prompt);

    Serial.println("\n--- Gemini Response ---");
    Serial.println(result);
    Serial.println("-----------------------");
}

void loop() {
    // probably don't spam the API
}