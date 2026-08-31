#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80200304(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80200304;

loc_80200304:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200310:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020032C;
    }
}

loc_80200324:
{
    r30 = 0;
    goto loc_80200334;
}

loc_8020032C:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r30 = MemoryInline::FlatRead32((r5 + 612));
}

loc_80200334:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r5 = (r1 + 8);
    r3 = (r3 + 4);
    ctx->lr = 0x80200344u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC58Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r30 + 32));
    r0 = -1;
    r3 = MemoryInline::FlatRead8((r30 + 33));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r4 + r3);
    r0 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80200360:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_8020040C;
    }
}

loc_80200364:
{
}

loc_80200368:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200374;
    }
}

loc_8020036C:
{
    r5 = 0;
    goto loc_8020037C;
}

loc_80200374:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 612));
}

loc_8020037C:
{
    r3 = MemoryInline::FlatRead16(r5);
    r4 = -1;
    r7 = MemoryInline::FlatRead32((r31 + 32));
    r8 = (r3 + -1);
    r9 = MemoryInline::FlatRead8((r5 + 32));
    r5 = (r7 & r8);
    r3 = (0 - r5);
    r0 = (0 - r8);
    r6 = (r3 | r5);
    r5 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r9));
    r0 = (r0 | r8);
    r3 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r5 = (r5 + r6);
    r0 = (r3 + r0);
}

loc_802003C0:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_802003C8;
    }
}

loc_802003C4:
{
    MemoryInline::FlatWrite32((r31 + 36), r4);
}

loc_802003C8:
{
    r0 = -1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_802003D0:
{
    MemoryInline::FlatWrite32((r31 + 32), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802003E0;
    }
}

loc_802003D8:
{
    r3 = 0;
    goto loc_802003E8;
}

loc_802003E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 612));
}

loc_802003E8:
{
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    goto loc_802004B4;
}

loc_8020040C:
{
}

loc_80200410:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200420;
    }
}

loc_80200418:
{
    r4 = 0;
    goto loc_80200428;
}

loc_80200420:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200428:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r7 = (r0 & r3);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r8 & r3);
    r6 = (0 - r7);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_8020046C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80200478;
    }
}

loc_80200470:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_80200478:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020047C:
{
    MemoryInline::FlatWrite32((r31 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020048C;
    }
}

loc_80200484:
{
    r3 = 0;
    goto loc_80200494;
}

loc_8020048C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200494:
{
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
}

loc_802004B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80200304 func_80200304 preserves=true fpr_mask=0x00000000
