#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80674658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80674658;

loc_80674658:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    r7 = MemoryInline::FlatRead32((r3 + 88));
}

loc_80674678:
{
    r8 = (r7 - r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_806746B8;
    }
}

loc_80674680:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_8067468C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r7))) {
        goto loc_806746B8;
    }
}

loc_80674690:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_80674698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806746A8;
    }
}

loc_8067469C:
{
}

loc_806746A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_806746B0;
    }
}

loc_806746A4:
{
    goto loc_806746B8;
}

loc_806746A8:
{
    r0 = 1;
    goto loc_806746BC;
}

loc_806746B0:
{
    r0 = 2;
    goto loc_806746BC;
}

loc_806746B8:
{
    r0 = 3;
}

loc_806746BC:
{
}

loc_806746C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_806746C8;
    }
}

loc_806746C4:
{
    r8 = (r8 + -1);
}

loc_806746C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_806746CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806746D8;
    }
}

loc_806746D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(10));
}

loc_806746D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806746F0;
    }
}

loc_806746D8:
{
    r4 = -10325;
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 0;
    goto loc_80674780;
}

loc_806746F0:
{
}

loc_806746F4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80674708;
    }
}

loc_806746F8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 104));
    goto loc_80674714;
}

loc_80674708:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 144));
}

loc_80674714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80674718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80674734;
    }
}

loc_8067471C:
{
    r4 = -10323;
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 0;
    goto loc_80674780;
}

loc_80674734:
{
    r3 = 0x809C0000u;
    r5 = r6;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x80674744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067790Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674774;
    }
}

loc_8067474C:
{
    r5 = 0;
    r4 = 1;
    r0 = 22;
    MemoryInline::FlatWrite32((r31 + 20), r5);
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 16), r4);
    MemoryInline::FlatWrite32((r31 + 30072), r0);
    MemoryInline::FlatWrite8((r31 + 40), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r31 + 24), r5);
    goto loc_80674780;
}

loc_80674774:
{
    r3 = r31;
    ctx->lr = 0x8067477Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067552Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_80674780:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80674658 func_80674658 preserves=true fpr_mask=0x00000000
