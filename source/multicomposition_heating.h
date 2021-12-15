#ifndef _aspect_heating_model_multicomposition_heating_h
#define _aspect_heating_model_multicomposition_heating_h

#include <aspect/heating_model/interface.h>
#include <aspect/simulator_access.h>

namespace aspect
{
	namespace HeatingModel
	{
		using namespace dealii;

		template <int dim>
		class MulticompositionHeating: public Interface<dim>, public SimulatorAccess<dim>
		{
		public:

			void evaluate(const MaterialModel::MaterialModelInputs<dim> &material_model_inputs,
                                      const MaterialModel::MaterialModelOutputs<dim> &material_model_outputs,
                                            HeatingModel::HeatingModelOutputs &heating_model_outputs) const override;

			static void declare_parameters(ParameterHandler &prm);

			void parse_parameters(ParameterHandler &prm) override;

		private:

			unsigned int n_radio_heating_elements;

			std::vector<double> half_decay_times;

        	        std::vector<double> initial_radioactive_heating_rates;

        	        std::vector<double> portion_coefficients;

        	        std::vector<bool> fields_used_in_heat_production_averaging;

        	        bool use_background_field_for_heat_production_averaging;
		};
	}
}

#endif
