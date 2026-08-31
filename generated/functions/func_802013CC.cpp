#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802013CC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802013CC;

loc_802013CC:
{
    MemoryInline::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802013D8:
{
    MemoryInline::FlatWriteRam32((r1 + 740), r0);
    MemoryInline::FlatWriteRam32((r1 + 732), r31);
    MemoryInline::FlatWriteRam32((r1 + 728), r30);
    MemoryInline::FlatWriteRam32((r1 + 724), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201408;
    }
}

loc_802013F0:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80201574;
}

loc_80201408:
{
    ctx->lr = 0x8020140Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802035ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201410:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201430;
    }
}

loc_80201418:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80201574;
}

loc_80201430:
{
    ctx->lr = 0x80201434u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80205EB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201450;
    }
}

loc_8020143C:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r30 + 6228), r3);
    goto loc_80201574;
}

loc_80201450:
{
    r31 = 0;
    r5 = r30;
    MemoryInline::FlatWrite32((r30 + 5616), r31);
    r6 = r29;
    r3 = (r1 + 24);
    r4 = (r1 + 136);
    r7 = 0;
    ctx->lr = 0x80201470u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FA478u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020147C;
    }
}

loc_80201478:
{
    goto loc_80201510;
}

loc_8020147C:
{
    r6 = MemoryInline::FlatRead32((r1 + 36));
    r5 = r30;
    r3 = (r1 + 32);
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r1 + 676));
    r0 = (r0 & 25);
}

loc_80201498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802014A4;
    }
}

loc_8020149C:
{
    r3 = 11;
    goto loc_80201510;
}

loc_802014A4:
{
    r3 = (r1 + 136);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r1)) + static_cast<uint64_t>(static_cast<uint32_t>(136)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802014A8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802014B8;
    }
}

loc_802014B0:
{
    r0 = 0;
    goto loc_802014D0;
}

loc_802014B8:
{
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80201290u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_802014D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802014D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802014E0;
    }
}

loc_802014D8:
{
    r3 = 19;
    goto loc_80201510;
}

loc_802014E0:
{
    r31 = MemoryInline::FlatRead32((r1 + 700));
    r3 = (r1 + 136);
    r4 = (r1 + 24);
    ctx->lr = 0x802014F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F814Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802014F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802014FC;
    }
}

loc_802014F8:
{
    goto loc_80201510;
}

loc_802014FC:
{
    r6 = MemoryInline::FlatRead32((r1 + 688));
    r4 = r31;
    r3 = (r1 + 32);
    r5 = -1;
    ctx->lr = 0x80201510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FC900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80201510:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020152C;
    }
}

loc_80201518:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r30 + 6228), r3);
    goto loc_80201574;
}

loc_8020152C:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80201538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F600Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020153C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201554;
    }
}

loc_80201540:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r30 + 6228), r3);
    goto loc_80201574;
}

loc_80201554:
{
    r3 = r30;
    ctx->lr = 0x8020155Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F5FD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201574;
    }
}

loc_80201564:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r30 + 6228), r3);
}

loc_80201574:
{
    r0 = MemoryInline::FlatRead32((r1 + 740));
    r31 = MemoryInline::FlatRead32((r1 + 732));
    r30 = MemoryInline::FlatRead32((r1 + 728));
    r29 = MemoryInline::FlatRead32((r1 + 724));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802013CC func_802013CC preserves=true fpr_mask=0x00000000
