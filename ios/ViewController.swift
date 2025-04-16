import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var counterLabel: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // 카운터 초기화
        CounterBridge.initCounter()
        
        // 초기 값 표시
        updateCounterDisplay()
    }
    
    @IBAction func incrementButtonTapped(_ sender: UIButton) {
        CounterBridge.incrementCounter()
        updateCounterDisplay()
    }
    
    @IBAction func decrementButtonTapped(_ sender: UIButton) {
        CounterBridge.decrementCounter()
        updateCounterDisplay()
    }
    
    private func updateCounterDisplay() {
        let value = CounterBridge.getCounterValue()
        counterLabel.text = "\(value)"
    }
}

