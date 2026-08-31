#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056C8F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8056C8F0;

loc_8056C8F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f2.d = MemoryInline::FlatReadFloat32((r3 + 544));
    MemoryInline::FlatWriteFloat32((r31 + 556), f2.d);
    r3 = MemoryInline::FlatRead32((r31 + 564));
    r4 = MemoryInline::FlatRead32((r31 + 560));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8056C924:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056C930;
    }
}

loc_8056C928:
{
    MemoryInline::FlatWriteFloat32((r31 + 556), f0.d);
    goto loc_8056C93C;
}

loc_8056C930:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8056C934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056C93C;
    }
}

loc_8056C938:
{
    MemoryInline::FlatWriteFloat32((r31 + 556), f1.d);
}

loc_8056C93C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C8F0 func_8056C8F0 preserves=true fpr_mask=0x00000000
