#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800875C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800875C0;

loc_800875C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = (r3 + 4);
    ctx->lr = 0x800875E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80088240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800875EC:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800878B4;
    }
}

loc_800875F4:
{
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r5 = (r4 & 4);
}

loc_800875FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8008761C;
    }
}

loc_80087600:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80087604:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008761C;
    }
}

loc_80087608:
{
    r3 = r28;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x80087618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800878B4;
}

loc_8008761C:
{
}

loc_80087620:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8008770C;
    }
}

loc_80087624:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_8008762C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_8008766C;
    }
}

loc_80087630:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_80087638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008766C;
    }
}

loc_8008763C:
{
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r5 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl1_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl1_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x800AD0C0;
    }
}

loc_inl1_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r12 = MemoryInline::FlatRead32((r28 + 32));
    r5 = r3;
    r4 = r30;
    r6 = MemoryInline::FlatRead32((r31 + 28));
    r7 = MemoryInline::FlatRead32((r28 + 36));
    r3 = 3;
    ctr = r12;
    ctx->lr = 0x8008766Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8008766C:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8008767C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80087694;
    }
}

loc_80087680:
{
    r3 = r28;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x80087690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800878B4;
}

loc_80087694:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800878B4;
    }
}

loc_80087698:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_800876A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800876B8;
    }
}

loc_800876A4:
{
    r3 = r28;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x800876B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800878B4;
}

loc_800876B8:
{
    r27 = 0;
    r26 = 0;
    r29 = 0;
    goto loc_800876FC;
}

loc_800876C8:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
    r30 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_800876D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_800876F4;
    }
}

loc_800876DC:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800876E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800876F0;
    }
}

loc_800876E8:
{
    r4 = 0;
    ctx->lr = 0x800876F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800876F0:
{
    MemoryInline::FlatWrite32((r30 + 4), r29);
}

loc_800876F4:
{
    r26 = (r26 + 12);
    r27 = (r27 + 1);
}

loc_800876FC:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_80087704:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800876C8;
    }
}

loc_80087708:
{
    goto loc_800878B4;
}

loc_8008770C:
{
    r0 = (r4 & 2);
}

loc_80087710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800877A8;
    }
}

loc_80087714:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8008771C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_8008775C;
    }
}

loc_80087720:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_80087728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008775C;
    }
}

loc_8008772C:
{
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r5 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl2_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl2_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x800AD0C0;
    }
}

loc_inl2_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl2_cont_800AD0B0;
}

loc_inl2_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl2_cont_800AD0B0;
}

loc_inl2_return:
{
}

loc_inl2_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r12 = MemoryInline::FlatRead32((r28 + 32));
    r5 = r3;
    r4 = r30;
    r6 = MemoryInline::FlatRead32((r31 + 28));
    r7 = MemoryInline::FlatRead32((r28 + 36));
    r3 = 2;
    ctr = r12;
    ctx->lr = 0x8008775Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8008775C:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8008776C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80087784;
    }
}

loc_80087770:
{
    r3 = r28;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x80087780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800878B4;
}

loc_80087784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800878B4;
    }
}

loc_80087788:
{
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_80087790:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800878B4;
    }
}

loc_80087794:
{
    r3 = r28;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x800877A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800878B4;
}

loc_800877A8:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800877B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_800877F0;
    }
}

loc_800877B4:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_800877BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800877F0;
    }
}

loc_800877C0:
{
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r5 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl3_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl3_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x800AD0C0;
    }
}

loc_inl3_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl3_cont_800AD0B0;
}

loc_inl3_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl3_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl3_cont_800AD0B0;
}

loc_inl3_return:
{
}

loc_inl3_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r12 = MemoryInline::FlatRead32((r28 + 32));
    r5 = r3;
    r4 = r30;
    r6 = MemoryInline::FlatRead32((r31 + 28));
    r7 = MemoryInline::FlatRead32((r28 + 36));
    r3 = 2;
    ctr = r12;
    ctx->lr = 0x800877F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800877F0:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
}

loc_800877F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_80087838;
    }
}

loc_800877FC:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_80087804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80087838;
    }
}

loc_80087808:
{
    r3 = MemoryInline::FlatRead8((r31 + 8));
    r5 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 12));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl4_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl4_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_0x800AD0C0;
    }
}

loc_inl4_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl4_cont_800AD0B0;
}

loc_inl4_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl4_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl4_cont_800AD0B0;
}

loc_inl4_return:
{
}

loc_inl4_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    r12 = MemoryInline::FlatRead32((r28 + 32));
    r5 = r3;
    r4 = r30;
    r6 = MemoryInline::FlatRead32((r31 + 28));
    r7 = MemoryInline::FlatRead32((r28 + 36));
    r3 = 3;
    ctr = r12;
    ctx->lr = 0x80087838u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80087838:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80087840:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r30))) {
        goto loc_80087864;
    }
}

loc_80087844:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8008784C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80087864;
    }
}

loc_80087850:
{
    r3 = r28;
    r4 = r31;
    r5 = 1;
    ctx->lr = 0x80087860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80087D80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800878B4;
}

loc_80087864:
{
    r30 = 0;
    r26 = 0;
    r29 = 0;
    goto loc_800878A8;
}

loc_80087874:
{
    r0 = MemoryInline::FlatRead32((r28 + 16));
    r27 = (r0 + r26);
    r0 = MemoryInline::FlatRead32((r27 + 4));
}

loc_80087884:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_800878A0;
    }
}

loc_80087888:
{
    r3 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80087890:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008789C;
    }
}

loc_80087894:
{
    r4 = 0;
    ctx->lr = 0x8008789Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8008789C:
{
    MemoryInline::FlatWrite32((r27 + 4), r29);
}

loc_800878A0:
{
    r26 = (r26 + 12);
    r30 = (r30 + 1);
}

loc_800878A8:
{
    r0 = MemoryInline::FlatRead32((r28 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_800878B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80087874;
    }
}

loc_800878B4:
{
    r11 = (r1 + 32);
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800875C0 func_800875C0 preserves=true fpr_mask=0x00000000
