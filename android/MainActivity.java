package com.example.counterdemo;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import com.example.counterlibrary.CounterNative;

public class MainActivity extends AppCompatActivity {
    private CounterNative counterNative;
    private TextView counterTextView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        // 네이티브 카운터 초기화
        counterNative = new CounterNative();
        counterNative.initCounter();
        
        // UI 요소 참조
        counterTextView = findViewById(R.id.counter_text);
        Button incrementButton = findViewById(R.id.increment_button);
        Button decrementButton = findViewById(R.id.decrement_button);
        
        // 초기 카운터 값 표시
        updateCounterDisplay();
        
        // 증가 버튼 리스너
        incrementButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                counterNative.incrementCounter();
                updateCounterDisplay();
            }
        });
        
        // 감소 버튼 리스너
        decrementButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                counterNative.decrementCounter();
                updateCounterDisplay();
            }
        });
    }
    
    private void updateCounterDisplay() {
        int value = counterNative.getCounterValue();
        counterTextView.setText(String.valueOf(value));
    }
}
