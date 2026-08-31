#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066A118(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066A118;

loc_8066A118:
{
    r26 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8066A128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_8066A12C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066A138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A1A8;
    }
}

loc_8066A13C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8066A14C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066A16C;
    }
}

loc_8066A150:
{
    r5 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + -28660));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r5 + -28660), r0);
}

loc_8066A16C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = (r3 & 65535);
}

loc_8066A17C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8066A19C;
    }
}

loc_8066A180:
{
    r5 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + -28656));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r5 + -28656), r0);
}

loc_8066A19C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16900));
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8066A1A8:
{
    r0 = MemoryInline::FlatRead8((r27 + 16908));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A1B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A1C0;
    }
}

loc_8066A1B4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A1C0:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 16904), r0);
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x4C00003B gpr_write=0xFC00003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066A118 func_8066A118 preserves=true fpr_mask=0x00000000
