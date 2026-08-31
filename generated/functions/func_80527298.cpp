#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80527298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80527298;

loc_80527298:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r4 = 0;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    MemoryInline::FlatWrite8((r3 + 724), static_cast<uint8_t>(r4));
    r4 = -1;
    ctr = r0;
}

loc_805272C8:
{
    r0 = (r7 & 65535);
    r7 = (r7 + 8);
    r5 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 624), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r5 + 624), static_cast<uint8_t>(r4));
    r6 = (r7 & 65535);
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 625), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 626), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 627), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 628), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 629), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r5 + 630), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r5 + 631), static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r6 = (r7 & 65535);
    r7 = (r7 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 624), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 624), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 625), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 626), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 627), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 628), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 629), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r5 + 630), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r5 + 631), static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r6 = (r7 & 65535);
    r7 = (r7 + 8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 624), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r5 + 624), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 625), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 626), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 627), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 628), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 629), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 630), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 631), static_cast<uint8_t>(r4));
    r5 = (r3 + r6);
    r6 = (r7 & 65535);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 624), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r5 + 624), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r5 + 625), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r5 + 626), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r5 + 627), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r5 + 628), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r5 + 629), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r5 + 630), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r5 + 631), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805272C8;
    }
}

loc_80527380:
{
    r4 = (r7 + 1);
    r0 = (r7 + 2);
    r5 = (r4 & 65535);
    r6 = (r3 + r6);
    r4 = (r0 & 65535);
    r0 = (r7 + 3);
    r7 = -1;
    MemoryInline::FlatWrite8((r6 + 624), static_cast<uint8_t>(r7));
    r5 = (r3 + r5);
    r0 = (r0 & 65535);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite8((r5 + 624), static_cast<uint8_t>(r7));
    r3 = (r3 + r0);
    r30 = 0;
    MemoryInline::FlatWrite8((r4 + 624), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 624), static_cast<uint8_t>(r7));
}

loc_805273C0:
{
    r3 = (r30 & 65535);
    ctx->lr = 0x805273C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805273CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80527414;
    }
}

loc_805273D0:
{
    r3 = (r1 + 68);
    r6 = (r30 & 65535);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x805273E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CB7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805273E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80527414;
    }
}

loc_805273EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 120));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r0 = (r0_rot_2 & 1);
}

loc_805273F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80527414;
    }
}

loc_805273FC:
{
    r0 = MemoryInline::FlatRead8((r31 + 724));
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 624), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 724));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 724), static_cast<uint8_t>(r0));
}

loc_80527414:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(100));
}

loc_8052741C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805273C0;
    }
}

loc_80527420:
{
    r30 = 0;
}

loc_80527424:
{
    r3 = (r30 & 65535);
    ctx->lr = 0x8052742Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80527430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80527474;
    }
}

loc_80527434:
{
    r3 = (r1 + 8);
    r6 = (r30 & 65535);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x80527448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CB7E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052744C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80527474;
    }
}

loc_80527450:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r0 = (r0_rot_5 & 1);
}

loc_80527458:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80527474;
    }
}

loc_8052745C:
{
    r0 = MemoryInline::FlatRead8((r31 + 724));
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 624), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r31 + 724));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 724), static_cast<uint8_t>(r0));
}

loc_80527474:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(100));
}

loc_8052747C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80527424;
    }
}

loc_80527480:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800207B gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80527298 func_80527298 preserves=true fpr_mask=0x00000000
