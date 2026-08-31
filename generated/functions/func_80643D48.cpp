#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80643D48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r29 = ctx->gpr[29];

    goto loc_80643D48;

loc_80643D48:
{
    r29 = 112;
    ctx->gpr[29] = r29;
    InvokeDirectCpu<0x80643D84u>(ctx);
    r29 = ctx->gpr[29];
    ctx->gpr[29] = r29;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xDFFFEFC7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80643D48 func_80643D48 preserves=true fpr_mask=0x00000000
