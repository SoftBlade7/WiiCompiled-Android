#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066FBC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_ca_5 = 0;
    uint32_t r6_ca_6 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r6_not_5 = 0;
    uint32_t r6_not_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066FBC8;

loc_8066FBC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -368), 0, 376u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 372u, (r1 + 372), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r1 + 336), r24);
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r1 + 340), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r1 + 344), r26);
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r1 + 348), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r1 + 352), r28);
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r1 + 356), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r1 + 360), r30);
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r1 + 364), r31);
    }
    r25 = r3;
    r26 = r4;
    r27 = r5;
    ctx->lr = 0x8066FBE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E51C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FBEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FBF8;
    }
}

loc_8066FBF0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8066FDF8;
}

loc_8066FBF8:
{
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r31 = 1;
    MemoryInline::FlatWrite32(r27, r30);
}

loc_8066FC08:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    r3 = (r1 + 72);
    r5 = (r1 + 16);
    r6 = (r1 + 24);
    r4 = 1;
    ctx->lr = 0x8066FC20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E52B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FC24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FC44;
    }
}

loc_8066FC28:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r24 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl0_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl0_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8023320C;
    }
}

loc_inl0_0x80233204:
{
}

loc_inl0_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl0_0x80233214;
    }
}

loc_inl0_0x8023320C:
{
    r3 = 1;
    goto loc_inl0_cont_802331F8;
}

loc_inl0_0x80233214:
{
    r3 = 0;
}

loc_inl0_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FC38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FC44;
    }
}

loc_8066FC3C:
{
    r3 = r24;
    goto loc_8066FDF8;
}

loc_8066FC44:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8066FC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FD94;
    }
}

loc_8066FC50:
{
    r3 = r25;
    r4 = (r1 + 72);
    r5 = (r1 + 12);
    ctx->lr = 0x8066FC60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066FE0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8066FC64:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066FD80;
    }
}

loc_8066FC6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8066FC74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066FD94;
    }
}

loc_8066FC78:
{
    r0 = MemoryInline::FlatRead8((r26 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066FC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FCD4;
    }
}

loc_8066FC84:
{
    r3 = r25;
    r5 = r26;
    r4 = (r1 + 72);
    r6 = (r1 + 8);
    ctx->lr = 0x8066FC98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806706ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066FC9C:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066FCC0;
    }
}

loc_8066FCA4:
{
    r3 = MemoryInline::FlatRead32((r26 + 10272));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r27, r0);
    goto loc_8066FD94;
}

loc_8066FCC0:
{
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl1_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl1_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8023320C;
    }
}

loc_inl1_0x80233204:
{
}

loc_inl1_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl1_0x80233214;
    }
}

loc_inl1_0x8023320C:
{
    r3 = 1;
    goto loc_inl1_cont_802331F8;
}

loc_inl1_0x80233214:
{
    r3 = 0;
}

loc_inl1_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FCC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FD94;
    }
}

loc_8066FCCC:
{
    r3 = r24;
    goto loc_8066FDF8;
}

loc_8066FCD4:
{
    r3 = r25;
    r5 = r26;
    r4 = (r1 + 72);
    r6 = 0;
    ctx->lr = 0x8066FCE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806706ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FCEC:
{
    r24 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FD6C;
    }
}

loc_8066FCF4:
{
    r3 = (r1 + 72);
    r4 = (r1 + 32);
    ctx->lr = 0x8066FD00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DE5A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 32);
    ctx->lr = 0x8066FD08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AB170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r27);
}

loc_8066FD10:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8066FD48;
    }
}

loc_8066FD14:
{
    r0 = (r3 ^ -2147483648);
    r6 = (r29 ^ -2147483648);
    r5 = (r4 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r6_not_2 = ~(r6);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r0);
    r6 = (r6 + r6_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_3 = ~(r0);
    r6_ca_3 = (xer >> 29) & 1u;
    r6 = (r6_not_3 + r0);
    r6 = (r6 + r6_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8066FD5C;
    }
}

loc_8066FD30:
{
    r28 = r4;
    r29 = r3;
    r3 = (r1 + 72);
    r4 = (r1 + 20);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    goto loc_8066FD5C;
}

loc_8066FD48:
{
    r28 = r4;
    r29 = r3;
    r3 = (r1 + 72);
    r4 = (r1 + 20);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
}

loc_8066FD5C:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r27, r0);
    goto loc_8066FD94;
}

loc_8066FD6C:
{
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl4_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl4_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl4_0x8023320C;
    }
}

loc_inl4_0x80233204:
{
}

loc_inl4_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl4_0x80233214;
    }
}

loc_inl4_0x8023320C:
{
    r3 = 1;
    goto loc_inl4_cont_802331F8;
}

loc_inl4_0x80233214:
{
    r3 = 0;
}

loc_inl4_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FD74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FD94;
    }
}

loc_8066FD78:
{
    r3 = r24;
    goto loc_8066FDF8;
}

loc_8066FD80:
{
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl5_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl5_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl5_0x8023320C;
    }
}

loc_inl5_0x80233204:
{
}

loc_inl5_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl5_0x80233214;
    }
}

loc_inl5_0x8023320C:
{
    r3 = 1;
    goto loc_inl5_cont_802331F8;
}

loc_inl5_0x80233214:
{
    r3 = 0;
}

loc_inl5_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FD88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FD94;
    }
}

loc_8066FD8C:
{
    r3 = r24;
    goto loc_8066FDF8;
}

loc_8066FD94:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066FD9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FC08;
    }
}

loc_8066FDA0:
{
    r0 = MemoryInline::FlatRead8((r26 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066FDA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FDF4;
    }
}

loc_8066FDAC:
{
    r0 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066FDB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066FDF4;
    }
}

loc_8066FDB8:
{
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r1 + 72);
    r4 = 1;
    ctx->lr = 0x8066FDC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DE6F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FDCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FDEC;
    }
}

loc_8066FDD0:
{
    r3 = r25;
    r5 = r26;
    r4 = (r1 + 72);
    ctx->lr = 0x8066FDE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80670C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FDE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FDF4;
    }
}

loc_8066FDE8:
{
    goto loc_8066FDF8;
}

loc_8066FDEC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8066FDF8;
}

loc_8066FDF4:
{
    r3 = 0;
}

loc_8066FDF8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 336), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 336));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 340));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 344));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 348));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 352));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 356));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 360));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 364));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066FBC8 func_8066FBC8 preserves=true fpr_mask=0x00000000
