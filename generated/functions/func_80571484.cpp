#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80571484(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80571484;

loc_80571484:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80571490:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 22;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805714B8;
    }
}

loc_805714B4:
{
    r0 = 25;
}

loc_805714B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805714BC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805714F0;
    }
}

loc_805714C4:
{
    r3 = r29;
    r4 = r30;
    r6 = r31;
    r5 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80571570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805714DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805714F0;
    }
}

loc_805714E0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x80595CA4 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x80595CA4
    goto loc_80571548;
}

loc_805714F0:
{
}

loc_805714F4:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80571518;
    }
}

loc_805714F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805714FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80571518;
    }
}

loc_80571500:
{
    r0 = 23;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x80595CA4 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    // end of inlined leaf 0x80595CA4
    goto loc_80571548;
}

loc_80571518:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8057151C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80571548;
    }
}

loc_80571520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80571524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80571548;
    }
}

loc_80571528:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8057153C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80571548;
    }
}

loc_80571540:
{
    r0 = 25;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_80571548:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r29 + 4);
    ctx->lr = 0x80571554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80571484 func_80571484 preserves=true fpr_mask=0x00000000
