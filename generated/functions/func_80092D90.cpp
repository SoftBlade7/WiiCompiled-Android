#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80092D90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80092D90;

loc_80092D90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = (r3 + 48);
    // inline leaf 0x8012CEB4 (3 guest instruction(s))
    r3 = 65536;
    r3 = (r3 + -27136);
    // end of inlined leaf 0x8012CEB4
    r0 = (r3 + 135);
    r3 = (r31 + 208);
    r31 = (r0 & -32);
    // inline leaf 0x8012D9B8 (3 guest instruction(s))
    r3 = 65536;
    r3 = (r3 + -14336);
    // end of inlined leaf 0x8012D9B8
    r0 = (r3 + 135);
    r3 = (r0 & -32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_80092DC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80092DD0;
    }
}

loc_80092DCC:
{
    r3 = r31;
}

loc_80092DD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80092D90 func_80092D90 preserves=true fpr_mask=0x00000000
