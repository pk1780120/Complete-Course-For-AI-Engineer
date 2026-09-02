import React, { useState } from 'react';
import { ChevronLeft, ChevronRight, Home, Code, Zap, Trophy } from 'lucide-react';

const DSAPresentation = () => {
  const [currentSlide, setCurrentSlide] = useState(0);

  const slides = [
    {
      title: "Snake, Water & Gun Game",
      subtitle: "DSA Implementation Project",
      content: (
        <div className="text-center space-y-8">
          <div className="text-8xl mb-6">🐍💧🔫</div>
          <div className="bg-gradient-to-r from-purple-600 to-pink-600 text-white p-6 rounded-2xl shadow-xl">
            <h2 className="text-3xl font-bold mb-3">Presented By</h2>
            <p className="text-2xl font-semibold">Pawan Kumar</p>
            <p className="text-xl mt-2">B.Tech 2nd Year | 3rd Semester</p>
          </div>
          <div className="bg-gradient-to-r from-blue-500 to-cyan-500 text-white p-4 rounded-xl">
            <p className="text-xl font-semibold">SIRT Bhopal | RGPV University</p>
          </div>
        </div>
      )
    },
    {
      title: "Project Overview",
      content: (
        <div className="space-y-6">
          <div className="bg-gradient-to-r from-indigo-500 to-purple-600 text-white p-6 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold mb-3">🎮 What is Snake-Water-Gun?</h3>
            <p className="text-lg">A digital version of the classic hand game, similar to Rock-Paper-Scissors, implemented in C++ using efficient DSA algorithms</p>
          </div>
          
          <div className="grid grid-cols-3 gap-4">
            <div className="bg-green-100 border-4 border-green-500 p-4 rounded-xl text-center transform hover:scale-105 transition">
              <div className="text-5xl mb-2">🐍</div>
              <p className="font-bold text-green-800">SNAKE</p>
            </div>
            <div className="bg-blue-100 border-4 border-blue-500 p-4 rounded-xl text-center transform hover:scale-105 transition">
              <div className="text-5xl mb-2">💧</div>
              <p className="font-bold text-blue-800">WATER</p>
            </div>
            <div className="bg-red-100 border-4 border-red-500 p-4 rounded-xl text-center transform hover:scale-105 transition">
              <div className="text-5xl mb-2">🔫</div>
              <p className="font-bold text-red-800">GUN</p>
            </div>
          </div>

          <div className="bg-yellow-100 border-l-4 border-yellow-600 p-4 rounded">
            <p className="font-bold text-yellow-800">🎯 Project Goal: Optimize game logic with minimal time complexity</p>
          </div>
        </div>
      )
    },
    {
      title: "Game Rules & Logic",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-pink-500 to-rose-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold mb-3">📜 Game Rules</h3>
          </div>
          
          <div className="grid grid-cols-1 gap-4">
            <div className="bg-green-50 border-l-4 border-green-600 p-4 rounded-lg shadow">
              <div className="flex items-center space-x-3">
                <span className="text-3xl">🐍</span>
                <span className="text-lg font-semibold">Snake drinks Water</span>
                <span className="text-2xl ml-auto">✅</span>
              </div>
            </div>
            
            <div className="bg-blue-50 border-l-4 border-blue-600 p-4 rounded-lg shadow">
              <div className="flex items-center space-x-3">
                <span className="text-3xl">💧</span>
                <span className="text-lg font-semibold">Water rusts Gun</span>
                <span className="text-2xl ml-auto">✅</span>
              </div>
            </div>
            
            <div className="bg-red-50 border-l-4 border-red-600 p-4 rounded-lg shadow">
              <div className="flex items-center space-x-3">
                <span className="text-3xl">🔫</span>
                <span className="text-lg font-semibold">Gun shoots Snake</span>
                <span className="text-2xl ml-auto">✅</span>
              </div>
            </div>
          </div>

          <div className="bg-purple-100 p-5 rounded-xl border-2 border-purple-400">
            <p className="text-center text-lg font-bold text-purple-800">Same choice = Draw/Tie 🤝</p>
          </div>
        </div>
      )
    },
    {
      title: "Algorithm Used: Hash Table",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-cyan-500 to-blue-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold flex items-center">
              <Code className="mr-3" size={32} />
              Why Hash Table?
            </h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-green-100 p-5 rounded-xl border-2 border-green-500">
              <h4 className="font-bold text-xl text-green-800 mb-3">✅ Advantages</h4>
              <ul className="space-y-2">
                <li className="flex items-start">
                  <span className="text-green-600 mr-2">▶</span>
                  <span>Constant time lookup O(1)</span>
                </li>
                <li className="flex items-start">
                  <span className="text-green-600 mr-2">▶</span>
                  <span>Fast winner determination</span>
                </li>
                <li className="flex items-start">
                  <span className="text-green-600 mr-2">▶</span>
                  <span>Efficient memory usage</span>
                </li>
                <li className="flex items-start">
                  <span className="text-green-600 mr-2">▶</span>
                  <span>Easy to maintain</span>
                </li>
              </ul>
            </div>

            <div className="bg-orange-100 p-5 rounded-xl border-2 border-orange-500">
              <h4 className="font-bold text-xl text-orange-800 mb-3">❌ Alternatives (Slower)</h4>
              <ul className="space-y-2">
                <li className="flex items-start">
                  <span className="text-orange-600 mr-2">▶</span>
                  <span>If-else chains: O(1) but longer code</span>
                </li>
                <li className="flex items-start">
                  <span className="text-orange-600 mr-2">▶</span>
                  <span>Arrays: O(n) search time</span>
                </li>
                <li className="flex items-start">
                  <span className="text-orange-600 mr-2">▶</span>
                  <span>Nested loops: O(n²) complexity</span>
                </li>
              </ul>
            </div>
          </div>

          <div className="bg-yellow-50 border-2 border-yellow-500 p-4 rounded-xl">
            <p className="text-center text-lg font-bold text-yellow-800">
              🚀 Hash Table = Best Choice for Game Logic Mapping!
            </p>
          </div>
        </div>
      )
    },
    {
      title: "Hash Table Implementation",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-indigo-600 to-purple-600 text-white p-5 rounded-xl">
            <h3 className="text-2xl font-bold">🗂️ Data Structure Design</h3>
          </div>

          <div className="bg-gray-50 p-5 rounded-xl border-2 border-gray-300 font-mono text-sm">
            <div className="bg-white p-4 rounded shadow-inner">
              <p className="text-purple-600 font-bold mb-2">// Hash Map Structure</p>
              <p className="text-blue-600">map&lt;string, map&lt;string, string&gt;&gt; gameRules;</p>
              <br/>
              <p className="text-green-600">// Key-Value Mapping:</p>
              <p>gameRules["snake"]["water"] = "player";</p>
              <p>gameRules["water"]["gun"] = "player";</p>
              <p>gameRules["gun"]["snake"] = "player";</p>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-green-100 p-4 rounded-lg text-center border-2 border-green-400">
              <p className="font-bold text-green-800 text-lg">🔑 Key</p>
              <p className="text-sm mt-2">Player Choice</p>
            </div>
            <div className="bg-blue-100 p-4 rounded-lg text-center border-2 border-blue-400">
              <p className="font-bold text-blue-800 text-lg">🗝️ Nested Key</p>
              <p className="text-sm mt-2">Computer Choice</p>
            </div>
            <div className="bg-purple-100 p-4 rounded-lg text-center border-2 border-purple-400">
              <p className="font-bold text-purple-800 text-lg">💎 Value</p>
              <p className="text-sm mt-2">Winner</p>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Time Complexity Analysis",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-red-500 to-pink-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold flex items-center">
              <Zap className="mr-3" size={32} />
              Performance Metrics
            </h3>
          </div>

          <div className="grid grid-cols-1 gap-4">
            <div className="bg-green-50 border-l-8 border-green-600 p-5 rounded-r-xl shadow-lg">
              <h4 className="text-xl font-bold text-green-800 mb-2">⚡ Hash Table Lookup</h4>
              <p className="text-3xl font-bold text-green-600">O(1)</p>
              <p className="text-sm text-gray-600 mt-2">Constant time - Best possible!</p>
            </div>

            <div className="bg-blue-50 border-l-8 border-blue-600 p-5 rounded-r-xl shadow-lg">
              <h4 className="text-xl font-bold text-blue-800 mb-2">🎲 Random Number Generation</h4>
              <p className="text-3xl font-bold text-blue-600">O(1)</p>
              <p className="text-sm text-gray-600 mt-2">Built-in rand() function</p>
            </div>

            <div className="bg-purple-50 border-l-8 border-purple-600 p-5 rounded-r-xl shadow-lg">
              <h4 className="text-xl font-bold text-purple-800 mb-2">🎯 Overall Game Complexity</h4>
              <p className="text-3xl font-bold text-purple-600">O(1)</p>
              <p className="text-sm text-gray-600 mt-2">Per round - Ultra-fast execution!</p>
            </div>
          </div>

          <div className="bg-gradient-to-r from-yellow-400 to-orange-500 text-white p-4 rounded-xl text-center">
            <p className="text-xl font-bold">🏆 Optimized for Speed & Efficiency!</p>
          </div>
        </div>
      )
    },
    {
      title: "Space Complexity Analysis",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-teal-500 to-cyan-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">💾 Memory Usage</h3>
          </div>

          <div className="space-y-4">
            <div className="bg-indigo-50 p-5 rounded-xl border-2 border-indigo-400">
              <h4 className="text-xl font-bold text-indigo-800 mb-3">Hash Map Storage</h4>
              <div className="grid grid-cols-2 gap-3">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-700">3 Main Keys</p>
                  <p className="text-sm text-gray-600">(snake, water, gun)</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-700">9 Total Mappings</p>
                  <p className="text-sm text-gray-600">(3 × 3 combinations)</p>
                </div>
              </div>
            </div>

            <div className="bg-pink-50 border-l-8 border-pink-600 p-5 rounded-r-xl">
              <h4 className="text-xl font-bold text-pink-800 mb-2">Space Complexity</h4>
              <p className="text-4xl font-bold text-pink-600">O(1)</p>
              <p className="text-gray-700 mt-2">Fixed size - No growth with input!</p>
            </div>

            <div className="bg-green-100 p-4 rounded-xl">
              <p className="text-center font-bold text-green-800 text-lg">
                ✅ Minimal memory footprint • Maximum performance
              </p>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "My Logic & Implementation",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-violet-500 to-purple-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">🧠 Implementation Strategy</h3>
          </div>

          <div className="space-y-4">
            <div className="bg-blue-50 p-4 rounded-xl border-l-4 border-blue-600">
              <h4 className="font-bold text-blue-800 mb-2">Step 1: Initialize Hash Map</h4>
              <p className="text-sm">Create nested map structure with all winning combinations</p>
            </div>

            <div className="bg-green-50 p-4 rounded-xl border-l-4 border-green-600">
              <h4 className="font-bold text-green-800 mb-2">Step 2: Get Player Input</h4>
              <p className="text-sm">Accept and validate user choice (snake/water/gun)</p>
            </div>

            <div className="bg-yellow-50 p-4 rounded-xl border-l-4 border-yellow-600">
              <h4 className="font-bold text-yellow-800 mb-2">Step 3: Generate Computer Choice</h4>
              <p className="text-sm">Use rand() to randomly select computer's move</p>
            </div>

            <div className="bg-purple-50 p-4 rounded-xl border-l-4 border-purple-600">
              <h4 className="font-bold text-purple-800 mb-2">Step 4: Determine Winner</h4>
              <p className="text-sm">Hash table lookup in O(1) time - instant result!</p>
            </div>

            <div className="bg-red-50 p-4 rounded-xl border-l-4 border-red-600">
              <h4 className="font-bold text-red-800 mb-2">Step 5: Display Result</h4>
              <p className="text-sm">Show winner and update score counter</p>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Code Structure",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-gray-700 to-gray-900 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold flex items-center">
              <Code className="mr-3" size={32} />
              C++ Implementation
            </h3>
          </div>

          <div className="bg-gray-100 p-5 rounded-xl border-2 border-gray-400 font-mono text-xs overflow-auto">
            <pre className="text-gray-800">
{`#include <iostream>
#include <map>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize game rules using Hash Map
    map<string, map<string, string>> rules;
    
    rules["snake"]["water"] = "player";
    rules["snake"]["gun"] = "computer";
    rules["water"]["snake"] = "computer";
    rules["water"]["gun"] = "player";
    rules["gun"]["snake"] = "player";
    rules["gun"]["water"] = "computer";
    
    // Get player input
    string playerChoice;
    cout << "Enter (snake/water/gun): ";
    cin >> playerChoice;
    
    // Generate computer choice - O(1)
    string choices[] = {"snake", "water", "gun"};
    string compChoice = choices[rand() % 3];
    
    // Determine winner - O(1) lookup
    if (playerChoice == compChoice)
        cout << "Draw!";
    else
        cout << rules[playerChoice][compChoice] 
             << " wins!";
}`}
            </pre>
          </div>

          <div className="bg-cyan-100 p-4 rounded-xl text-center">
            <p className="font-bold text-cyan-800 text-lg">🎯 Clean, Efficient & Optimized Code!</p>
          </div>
        </div>
      )
    },
    {
      title: "Key Features",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-emerald-500 to-teal-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">⭐ Project Highlights</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-gradient-to-br from-blue-100 to-blue-200 p-5 rounded-xl border-2 border-blue-400 shadow-lg">
              <div className="text-4xl mb-3">⚡</div>
              <h4 className="font-bold text-blue-800 text-lg mb-2">Lightning Fast</h4>
              <p className="text-sm">O(1) time complexity ensures instant gameplay</p>
            </div>

            <div className="bg-gradient-to-br from-green-100 to-green-200 p-5 rounded-xl border-2 border-green-400 shadow-lg">
              <div className="text-4xl mb-3">🧠</div>
              <h4 className="font-bold text-green-800 text-lg mb-2">Smart Algorithm</h4>
              <p className="text-sm">Hash table for optimal decision making</p>
            </div>

            <div className="bg-gradient-to-br from-purple-100 to-purple-200 p-5 rounded-xl border-2 border-purple-400 shadow-lg">
              <div className="text-4xl mb-3">💾</div>
              <h4 className="font-bold text-purple-800 text-lg mb-2">Memory Efficient</h4>
              <p className="text-sm">Fixed O(1) space complexity</p>
            </div>

            <div className="bg-gradient-to-br from-pink-100 to-pink-200 p-5 rounded-xl border-2 border-pink-400 shadow-lg">
              <div className="text-4xl mb-3">🎮</div>
              <h4 className="font-bold text-pink-800 text-lg mb-2">User Friendly</h4>
              <p className="text-sm">Simple interface with clear instructions</p>
            </div>

            <div className="bg-gradient-to-br from-yellow-100 to-yellow-200 p-5 rounded-xl border-2 border-yellow-400 shadow-lg">
              <div className="text-4xl mb-3">🎲</div>
              <h4 className="font-bold text-yellow-800 text-lg mb-2">Random AI</h4>
              <p className="text-sm">Fair computer opponent using rand()</p>
            </div>

            <div className="bg-gradient-to-br from-red-100 to-red-200 p-5 rounded-xl border-2 border-red-400 shadow-lg">
              <div className="text-4xl mb-3">🔄</div>
              <h4 className="font-bold text-red-800 text-lg mb-2">Scalable</h4>
              <p className="text-sm">Easy to extend with more options</p>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Comparison with Other Approaches",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-orange-500 to-red-600 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">⚖️ Algorithm Comparison</h3>
          </div>

          <div className="overflow-x-auto">
            <table className="w-full border-collapse">
              <thead>
                <tr className="bg-gray-800 text-white">
                  <th className="border-2 border-gray-600 p-3 text-left">Approach</th>
                  <th className="border-2 border-gray-600 p-3">Time</th>
                  <th className="border-2 border-gray-600 p-3">Space</th>
                  <th className="border-2 border-gray-600 p-3">Code Length</th>
                </tr>
              </thead>
              <tbody>
                <tr className="bg-green-100 border-2 border-green-500">
                  <td className="border-2 border-gray-300 p-3 font-bold text-green-800">✅ Hash Map (My Approach)</td>
                  <td className="border-2 border-gray-300 p-3 text-center font-bold text-green-600">O(1)</td>
                  <td className="border-2 border-gray-300 p-3 text-center font-bold text-green-600">O(1)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">Short</td>
                </tr>
                <tr className="bg-yellow-50">
                  <td className="border-2 border-gray-300 p-3">If-Else Chain</td>
                  <td className="border-2 border-gray-300 p-3 text-center">O(1)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">O(1)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">Very Long</td>
                </tr>
                <tr className="bg-orange-50">
                  <td className="border-2 border-gray-300 p-3">Switch-Case</td>
                  <td className="border-2 border-gray-300 p-3 text-center">O(1)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">O(1)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">Long</td>
                </tr>
                <tr className="bg-red-50">
                  <td className="border-2 border-gray-300 p-3">Linear Search</td>
                  <td className="border-2 border-gray-300 p-3 text-center text-red-600">O(n)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">O(n)</td>
                  <td className="border-2 border-gray-300 p-3 text-center">Medium</td>
                </tr>
              </tbody>
            </table>
          </div>

          <div className="bg-green-50 border-2 border-green-500 p-4 rounded-xl">
            <p className="text-center font-bold text-green-800 text-lg">
              🏆 Hash Map = Best Balance of Speed, Memory & Code Clarity!
            </p>
          </div>
        </div>
      )
    },
    {
      title: "Real-World Applications",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-blue-600 to-indigo-700 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">🌍 Where This Logic is Used</h3>
          </div>

          <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
            <div className="bg-gradient-to-br from-purple-100 to-purple-200 p-5 rounded-xl border-2 border-purple-400">
              <h4 className="font-bold text-purple-800 text-lg mb-3">🎮 Gaming Industry</h4>
              <ul className="space-y-2 text-sm">
                <li>• Decision-making systems</li>
                <li>• AI opponent behavior</li>
                <li>• Game state management</li>
              </ul>
            </div>

            <div className="bg-gradient-to-br from-cyan-100 to-cyan-200 p-5 rounded-xl border-2 border-cyan-400">
              <h4 className="font-bold text-cyan-800 text-lg mb-3">💳 Payment Systems</h4>
              <ul className="space-y-2 text-sm">
                <li>• Transaction validation</li>
                <li>• Fast lookup tables</li>
                <li>• Status checking</li>
              </ul>
            </div>

            <div className="bg-gradient-to-br from-green-100 to-green-200 p-5 rounded-xl border-2 border-green-400">
              <h4 className="font-bold text-green-800 text-lg mb-3">🔐 Security</h4>
              <ul className="space-y-2 text-sm">
                <li>• Password verification</li>
                <li>• Access control lists</li>
                <li>• Authentication systems</li>
              </ul>
            </div>

            <div className="bg-gradient-to-br from-orange-100 to-orange-200 p-5 rounded-xl border-2 border-orange-400">
              <h4 className="font-bold text-orange-800 text-lg mb-3">🗄️ Databases</h4>
              <ul className="space-y-2 text-sm">
                <li>• Index structures</li>
                <li>• Query optimization</li>
                <li>• Cache management</li>
              </ul>
            </div>
          </div>

          <div className="bg-yellow-100 p-4 rounded-xl text-center">
            <p className="font-bold text-yellow-800">💡 Hash Maps power millions of applications worldwide!</p>
          </div>
        </div>
      )
    },
    {
      title: "Learning Outcomes",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-teal-600 to-emerald-700 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">📚 What I Learned</h3>
          </div>

          <div className="space-y-4">
            <div className="bg-blue-50 p-5 rounded-xl border-l-8 border-blue-600 shadow-md">
              <h4 className="font-bold text-blue-800 text-lg mb-2">1️⃣ Data Structure Selection</h4>
              <p className="text-sm">Choosing the right DS for the problem is crucial for optimization</p>
            </div>

            <div className="bg-green-50 p-5 rounded-xl border-l-8 border-green-600 shadow-md">
              <h4 className="font-bold text-green-800 text-lg mb-2">2️⃣ Complexity Analysis</h4>
              <p className="text-sm">Understanding Big O notation and its real-world impact</p>
            </div>

            <div className="bg-purple-50 p-5 rounded-xl border-l-8 border-purple-600 shadow-md">
              <h4 className="font-bold text-purple-800 text-lg mb-2">3️⃣ C++ STL Mastery</h4>
              <p className="text-sm">Practical use of Standard Template Library containers</p>
            </div>

            <div className="bg-pink-50 p-5 rounded-xl border-l-8 border-pink-600 shadow-md">
              <h4 className="font-bold text-pink-800 text-lg mb-2">4️⃣ Problem-Solving Skills</h4>
              <p className="text-sm">Breaking complex problems into simple, efficient solutions</p>
            </div>

            <div className="bg-orange-50 p-5 rounded-xl border-l-8 border-orange-600 shadow-md">
              <h4 className="font-bold text-orange-800 text-lg mb-2">5️⃣ Code Optimization</h4>
              <p className="text-sm">Writing clean, maintainable, and performant code</p>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Future Enhancements",
      content: (
        <div className="space-y-5">
          <div className="bg-gradient-to-r from-pink-600 to-rose-700 text-white p-5 rounded-xl shadow-lg">
            <h3 className="text-2xl font-bold">🚀 Possible Improvements</h3>
          </div>

          <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
            <div className="bg-gradient-to-br from-blue-100 to-blue-200 p-5 rounded-xl shadow-lg transform hover:scale-105 transition">
              <div className="text-4xl mb-3">🎯</div>
              <h4 className="font-bold text-blue-800 mb-2">Score Tracking</h4>
              <p className="text-sm">Add player vs computer score system across multiple rounds</p>
            </div>

            <div className="bg-gradient-to-br from-green-100 to-green-200 p-5 rounded-xl shadow-lg transform hover:scale-105 transition">
              <div className="text-4xl mb-3">🤖</div>
              <h4 className="font-bold text-green-800 mb-2">Smart AI</h4>
              <p className="text-sm">Implement pattern recognition to predict player moves</p>
            </div>

            <div className="bg-gradient-to-br from-purple-100 to-purple-200 p-5 rounded-xl shadow-lg transform hover:scale-105 transition">
              <div className="text-4xl mb-3">🎨</div>
              <h4 className="font-bold text-purple-800 mb-2">GUI Version</h4>
              <p className="text-sm">Create graphical interface for better user experience</p>
            </div>

            <div className="bg-gradient-to-br from-yellow-100 to-yellow-200 p-5 rounded-xl shadow-lg transform hover:scale-105 transition">
              <div className="text-4xl mb-3">👥</div>
              <h4 className="font-bold text-yellow-800 mb-2">Multiplayer</h4>
              <p className="text-sm">Add player vs player mode for competitive gameplay</p>
            </div>

            <div className="bg-gradient-to-br from-pink-100 to-pink-200 p-5 rounded-xl shadow-lg transform hover:scale-105 transition">
              <div className="text-4xl mb-3">📊</div>
              <h4 className="font-bold text-pink-800 mb-2">Statistics</h4>
              <p className="text-sm">Display win rate, most used moves, and game analytics</p>
            </div>

            <div className="bg-gradient-to-br from-orange-100 to-orange-200 p-5 rounded-xl shadow-lg transform hover:scale-105 transition">
              <div className="text-4xl mb-3">🎮</div>
              <h4 className="font-bold text-orange-800 mb-2">Game Modes</h4>
              <p className="text-sm">Add tournament mode, best-of-5, timed challenges</p>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Thank You!",
      content: (
        <div className="text-center space-y-8">
          <div className="text-8xl mb-4">🎓🏆</div>
          
          <div className="bg-gradient-to-r from-purple-600 to-pink-600 text-white p-8 rounded-2xl shadow-2xl">
            <h2 className="text-4xl font-bold mb-4">Thank You!</h2>
            <p className="text-2xl">Questions & Feedback Welcome</p>
          </div>

          <div className="bg-gradient-to-r from-blue-500 to-cyan-500 text-white p-6 rounded-xl shadow-lg">
            <p className="text-xl font-bold mb-2">Pawan Kumar</p>
            <p className="text-lg">B.Tech 2nd Year | 3rd Semester</p>
            <p className="text-lg">SIRT Bhopal | RGPV University</p>
          </div>

          <div className="grid grid-cols-3 gap-4 mt-6">
            <div className="bg-green-100 p-4 rounded-xl border-2 border-green-500">
              <div className="text-3xl mb-2">⚡</div>
              <p className="font-bold text-green-800">O(1) Time</p>
            </div>
            <div className="bg-blue-100 p-4 rounded-xl border-2 border-blue-500">
              <div className="text-3xl mb-2">💾</div>
              <p className="font-bold text-blue-800">O(1) Space</p>
            </div>
            <div className="bg-purple-100 p-4 rounded-xl border-2 border-purple-500">
              <div className="text-3xl mb-2">🎯</div>
              <p className="font-bold text-purple-800">100% Optimized</p>
            </div>
          </div>

          <div className="bg-yellow-100 border-2 border-yellow-500 p-5 rounded-xl">
            <p className="text-xl font-bold text-yellow-800">
              🐍 Snake • 💧 Water • 🔫 Gun = DSA in Action!
            </p>
          </div>
        </div>
      )
    }
  ];

  const nextSlide = () => {
    setCurrentSlide((prev) => (prev + 1) % slides.length);
  };

  const prevSlide = () => {
    setCurrentSlide((prev) => (prev - 1 + slides.length) % slides.length);
  };

  const goToStart = () => {
    setCurrentSlide(0);
  };

  return (
    <div className="min-h-screen bg-gradient-to-br from-indigo-100 via-purple-50 to-pink-100 flex items-center justify-center p-4">
      <div className="w-full max-w-5xl">
        {/* Slide Container */}
        <div className="bg-white rounded-2xl shadow-2xl p-8 md:p-12 min-h-[600px] flex flex-col">
          {/* Slide Header */}
          <div className="mb-6">
            <h1 className="text-3xl md:text-4xl font-bold bg-gradient-to-r from-purple-600 to-pink-600 bg-clip-text text-transparent mb-2">
              {slides[currentSlide].title}
            </h1>
            {slides[currentSlide].subtitle && (
              <p className="text-xl text-gray-600 font-semibold">{slides[currentSlide].subtitle}</p>
            )}
            <div className="w-24 h-1.5 bg-gradient-to-r from-purple-600 to-pink-600 mt-3 rounded-full"></div>
          </div>

          {/* Slide Content */}
          <div className="flex-grow overflow-y-auto">
            {slides[currentSlide].content}
          </div>

          {/* Navigation */}
          <div className="flex items-center justify-between mt-8 pt-6 border-t-2 border-gray-200">
            <button
              onClick={prevSlide}
              className="flex items-center space-x-2 px-6 py-3 bg-gradient-to-r from-purple-600 to-pink-600 text-white rounded-xl hover:from-purple-700 hover:to-pink-700 transition shadow-lg disabled:opacity-50 disabled:cursor-not-allowed font-semibold"
              disabled={currentSlide === 0}
            >
              <ChevronLeft size={20} />
              <span>Previous</span>
            </button>

            <div className="flex items-center space-x-4">
              <button
                onClick={goToStart}
                className="p-3 text-gray-600 hover:text-purple-600 transition-colors hover:bg-purple-50 rounded-lg"
                title="Go to start"
              >
                <Home size={28} />
              </button>
              <span className="text-gray-700 font-bold text-lg bg-gray-100 px-4 py-2 rounded-lg">
                {currentSlide + 1} / {slides.length}
              </span>
            </div>

            <button
              onClick={nextSlide}
              className="flex items-center space-x-2 px-6 py-3 bg-gradient-to-r from-purple-600 to-pink-600 text-white rounded-xl hover:from-purple-700 hover:to-pink-700 transition shadow-lg disabled:opacity-50 disabled:cursor-not-allowed font-semibold"
              disabled={currentSlide === slides.length - 1}
            >
              <span>Next</span>
              <ChevronRight size={20} />
            </button>
          </div>
        </div>

        {/* Slide Indicators */}
        <div className="flex justify-center mt-6 space-x-2">
          {slides.map((_, idx) => (
            <button
              key={idx}
              onClick={() => setCurrentSlide(idx)}
              className={`h-3 rounded-full transition-all ${
                idx === currentSlide 
                  ? 'bg-gradient-to-r from-purple-600 to-pink-600 w-12' 
                  : 'bg-gray-300 hover:bg-gray-400 w-3'
              }`}
            />
          ))}
        </div>
      </div>
    </div>
  );
};

export default DSAPresentation;