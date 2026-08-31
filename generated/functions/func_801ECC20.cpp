#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801ECC20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801ECC20;

loc_801ECC20:
{
    r30 = -39;
}

loc_801ECC34:
{
    r3 = 0x80350000u;
    r3 = (r3 + 29216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193AD8u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801ECC48:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801ECC50;
    }
}

loc_801ECC4C:
{
    r30 = 0x80000000u;
}

loc_801ECC50:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r30 + -2147483648);
    r29 = r3;
}

loc_801ECC60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801ECCC0;
    }
}

loc_801ECC64:
{
    r3 = 0x80350000u;
    r4 = -1;
    r3 = (r3 + 29216);
    r0 = -2;
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_801ECCC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801ECCC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ECCE0;
    }
}

loc_801ECCC8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801ECCD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ECCDC;
    }
}

loc_801ECCD4:
{
    MemoryInline::FlatWrite32((r3 + 780), r30);
    goto loc_801ECCE0;
}

loc_801ECCDC:
{
    MemoryInline::FlatWrite32((r13 + -24268), r30);
}

loc_801ECCE0:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    r3 = r30;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x6000201B gpr_write=0xFC00081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801ECC20 func_801ECC20 preserves=true fpr_mask=0x00000000
