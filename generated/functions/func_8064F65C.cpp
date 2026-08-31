#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064F65C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8064F65C;

loc_8064F65C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    }
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = 0x809C0000u;
    r28 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8064F694:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(104))) {
        goto loc_8064F6A0;
    }
}

loc_8064F698:
{
}

loc_8064F69C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(105))) {
        goto loc_8064F6B4;
    }
}

loc_8064F6A0:
{
}

loc_8064F6A4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(108))) {
        goto loc_8064F7D0;
    }
}

loc_8064F6A8:
{
}

loc_8064F6AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(109))) {
        goto loc_8064F744;
    }
}

loc_8064F6B0:
{
    goto loc_8064F7D0;
}

loc_8064F6B4:
{
    r0 = (r3 & 255);
    r4 = 0x809C0000u;
    r0 = (r0 * 240);
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = 0x808B0000u;
    r5 = (r5 + r0);
    r4 = (r4 + 12960);
    r0 = MemoryInline::FlatRead16((r5 + 3328));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_8064F6DC:
{
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9999))) {
        goto loc_8064F6EC;
    }
}

loc_8064F6E4:
{
    r0 = 9999;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
}

loc_8064F6EC:
{
    r0 = MemoryInline::FlatRead16((r1 + 20));
}

loc_8064F6F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8064F700;
    }
}

loc_8064F6F8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
}

loc_8064F700:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead16((r1 + 20));
    r7 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8064F714:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8064F734;
    }
}

loc_8064F718:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r7 + r0);
    r4 = (r4 + 56);
    goto loc_8064F738;
}

loc_8064F734:
{
    r4 = 0;
}

loc_8064F738:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite16((r4 + -28648), static_cast<uint16_t>(r6));
    goto loc_8064F7D0;
}

loc_8064F744:
{
    r0 = (r3 & 255);
    r4 = 0x809C0000u;
    r0 = (r0 * 240);
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = 0x808B0000u;
    r5 = (r5 + r0);
    r4 = (r4 + 12960);
    r0 = MemoryInline::FlatRead16((r5 + 3328));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
}

loc_8064F76C:
{
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9999))) {
        goto loc_8064F77C;
    }
}

loc_8064F774:
{
    r0 = 9999;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_8064F77C:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_8064F784:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8064F790;
    }
}

loc_8064F788:
{
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_8064F790:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead16((r1 + 12));
    r7 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8064F7A4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8064F7C4;
    }
}

loc_8064F7A8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r7 + r0);
    r4 = (r4 + 56);
    goto loc_8064F7C8;
}

loc_8064F7C4:
{
    r4 = 0;
}

loc_8064F7C8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite16((r4 + -28640), static_cast<uint16_t>(r6));
}

loc_8064F7D0:
{
    r0 = (r3 & 255);
    r6 = 0;
    r27 = (r0 * 240);
    r26 = 0;
    r29 = 0x809C0000u;
    r31 = 0x808C0000u;
    r30 = 0x809C0000u;
}

loc_8064F7EC:
{
    r3 = (r26 & 255);
}

loc_8064F7F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r28))) {
        goto loc_8064F98C;
    }
}

loc_8064F7F8:
{
    r5 = MemoryInline::FlatRead32((r30 + 7736));
    r0 = MemoryInline::FlatRead32((r5 + 152));
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 728));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8064F98C;
    }
}

loc_8064F810:
{
    r3 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl0_0x805D2890:
{
}

loc_inl0_0x805D2894:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl0_0x805D28C0;
    }
}

loc_inl0_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D28B8;
    }
}

loc_inl0_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl0_cont_805D2890;
}

loc_inl0_0x805D28B8:
{
    r3 = 0;
    goto loc_inl0_cont_805D2890;
}

loc_inl0_0x805D28C0:
{
    r3 = 0;
}

loc_inl0_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r4 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8064F82C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(104))) {
        goto loc_8064F838;
    }
}

loc_8064F830:
{
}

loc_8064F834:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(105))) {
        goto loc_8064F84C;
    }
}

loc_8064F838:
{
}

loc_8064F83C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(108))) {
        goto loc_8064F8B8;
    }
}

loc_8064F840:
{
}

loc_8064F844:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(109))) {
        goto loc_8064F884;
    }
}

loc_8064F848:
{
    goto loc_8064F8B8;
}

loc_8064F84C:
{
    r0 = (r26 & 255);
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 3328));
}

loc_8064F864:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(9999))) {
        goto loc_8064F86C;
    }
}

loc_8064F868:
{
    r4 = 9999;
}

loc_8064F86C:
{
    r0 = (r4 & 65535);
}

loc_8064F874:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8064F87C;
    }
}

loc_8064F878:
{
    r4 = 1;
}

loc_8064F87C:
{
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r4));
    goto loc_8064F8B8;
}

loc_8064F884:
{
    r0 = (r26 & 255);
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 3328));
}

loc_8064F89C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(9999))) {
        goto loc_8064F8A4;
    }
}

loc_8064F8A0:
{
    r4 = 9999;
}

loc_8064F8A4:
{
    r0 = (r4 & 65535);
}

loc_8064F8AC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8064F8B4;
    }
}

loc_8064F8B0:
{
    r4 = 1;
}

loc_8064F8B4:
{
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r4));
}

loc_8064F8B8:
{
    r6 = MemoryInline::FlatRead32((r30 + 7736));
    r4 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r4 + -104);
}

loc_8064F8CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8064F988;
    }
}

loc_8064F8D0:
{
    r4 = (r31 + 348);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8064F8E4u:
        goto loc_8064F8E4;
        break;
    case 0x8064F988u:
        goto loc_8064F988;
        break;
    case 0x8064F93Cu:
        goto loc_8064F93C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8064F8E4:
{
    r0 = (r26 & 255);
    r5 = MemoryInline::FlatRead32((r29 + -10456));
    r4 = (r0 * 240);
    r0 = (r5 + 40);
    r8 = (r5 + 3096);
    r5 = (r0 + r4);
    r7 = (r0 + r27);
    r6 = (r8 + r27);
    r4 = (r8 + r4);
    r7 = MemoryInline::FlatRead16((r7 + 216));
    r6 = MemoryInline::FlatRead16((r6 + 218));
    r0 = MemoryInline::FlatRead16((r4 + 218));
    r5 = MemoryInline::FlatRead16((r5 + 216));
    r4 = (r6 - r7);
    r0 = (r0 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8064F924:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8064F930;
    }
}

loc_8064F928:
{
    // inline leaf 0x805199E8 (6 guest instruction(s))
}

loc_inl1_0x805199E8:
{
    r4 = MemoryInline::FlatRead16((r3 + 28));
}

loc_inl1_0x805199F0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805199F4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_805199E8;
}

loc_inl1_return:
{
}

loc_inl1_cont_805199E8:
{
    // end of inlined leaf 0x805199E8
    goto loc_8064F988;
}

loc_8064F930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8064F988;
    }
}

loc_8064F934:
{
    // inline leaf 0x805199D0 (6 guest instruction(s))
}

loc_inl2_0x805199D0:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
}

loc_inl2_0x805199D8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x805199DC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_805199D0;
}

loc_inl2_return:
{
}

loc_inl2_cont_805199D0:
{
    // end of inlined leaf 0x805199D0
    goto loc_8064F988;
}

loc_8064F93C:
{
    r0 = (r26 & 255);
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + 40);
    r5 = (r4 + r27);
    r4 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 204));
    r7 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8064F960:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r7))) {
        goto loc_8064F988;
    }
}

loc_8064F964:
{
    r4 = MemoryInline::FlatRead32((r6 + 152));
    r0 = MemoryInline::FlatRead32((r4 + 112));
}

loc_8064F970:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8064F97C;
    }
}

loc_8064F974:
{
    // inline leaf 0x805199E8 (6 guest instruction(s))
}

loc_inl3_0x805199E8:
{
    r4 = MemoryInline::FlatRead16((r3 + 28));
}

loc_inl3_0x805199F0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x805199F4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_805199E8;
}

loc_inl3_return:
{
}

loc_inl3_cont_805199E8:
{
    // end of inlined leaf 0x805199E8
    goto loc_8064F988;
}

loc_8064F97C:
{
}

loc_8064F980:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_8064F988;
    }
}

loc_8064F984:
{
    // inline leaf 0x805199D0 (6 guest instruction(s))
}

loc_inl4_0x805199D0:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
}

loc_inl4_0x805199D8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x805199DC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    goto loc_inl4_cont_805199D0;
}

loc_inl4_return:
{
}

loc_inl4_cont_805199D0:
{
    // end of inlined leaf 0x805199D0
}

loc_8064F988:
{
    r6 = 1;
}

loc_8064F98C:
{
    r26 = (r26 + 1);
}

loc_8064F994:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(12))) {
        goto loc_8064F7EC;
    }
}

loc_8064F998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8064F99C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064F9B4;
    }
}

loc_8064F9A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x8064F9B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D21B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8064F9B4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl5_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl5_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl5_cont_80621410;
}

loc_inl5_return:
{
}

loc_inl5_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r26 = MemoryInline::FlatRead32((r1 + 24));
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8064F65C func_8064F65C preserves=true fpr_mask=0x00000000
