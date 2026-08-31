#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801245A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_10 = 0;
    uint32_t r28_addr_11 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r28_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801245A0;

loc_801245A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r28 = MemoryInline::FlatRead32((r3 + 4));
    r26 = r3;
    r27 = r4;
    r29 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80124894u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801245CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801247F4;
    }
}

loc_801245D0:
{
    r29 = MemoryInline::FlatRead32((r26 + 24));
    r28 = MemoryInline::FlatRead32((r26 + 4));
}

loc_801245DC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801245E8;
    }
}

loc_801245E0:
{
    r4 = 0;
    goto loc_8012477C;
}

loc_801245E8:
{
    r0 = (r29 * 12);
    r7 = MemoryInline::FlatRead32((r26 + 16));
    r3 = (r28 + r0);
    r28_addr_1 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16777215);
}

loc_80124604:
{
    r30 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80124614;
    }
}

loc_8012460C:
{
    r4 = 0;
    goto loc_80124720;
}

loc_80124614:
{
    r0 = (r3 * 12);
    r3 = (r28 + r0);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16777215);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8012462C:
{
    r31 = (r7 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012463C;
    }
}

loc_80124634:
{
    r4 = 0;
    goto loc_801246C4;
}

loc_8012463C:
{
    r4 = (r3 * 12);
    r3 = r26;
    r5 = (r1 + 8);
    r6 = 128;
    r28_addr_3 = (r28 + r4);
    r0 = MemoryInline::FlatRead32(r28_addr_3);
    r4 = (r28 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 16777215);
    r26 = (r7 + r0);
    ctx->lr = 0x80124664u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80124AF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80124668:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(128))) {
        goto loc_80124674;
    }
}

loc_80124670:
{
    goto loc_801246C4;
}

loc_80124674:
{
    r4 = (r3 + 1);
    r5 = (r1 + 8);
    r0 = 47;
    r5_addr_1 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = r6;
    r5 = (r5 + r4);
    goto loc_801246A8;
}

loc_80124694:
{
    r0 = MemoryInline::FlatRead8(r26);
    r3 = (r3 + -1);
    r26 = (r26 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_801246A8:
{
}

loc_801246AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801246BC;
    }
}

loc_801246B0:
{
    r0 = MemoryInline::FlatRead8(r26);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80124694;
    }
}

loc_801246BC:
{
    r0 = (r6 - r3);
    r4 = (r4 + r0);
}

loc_801246C4:
{
}

loc_801246C8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_801246D0;
    }
}

loc_801246CC:
{
    goto loc_80124720;
}

loc_801246D0:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = r6;
    r3 = (r3 + r5);
    goto loc_80124704;
}

loc_801246F0:
{
    r0 = MemoryInline::FlatRead8(r31);
    r4 = (r4 + -1);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80124704:
{
}

loc_80124708:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80124718;
    }
}

loc_8012470C:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801246F0;
    }
}

loc_80124718:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_80124720:
{
}

loc_80124724:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_8012472C;
    }
}

loc_80124728:
{
    goto loc_8012477C;
}

loc_8012472C:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = r6;
    r3 = (r3 + r5);
    goto loc_80124760;
}

loc_8012474C:
{
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (r4 + -1);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_80124760:
{
}

loc_80124764:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80124774;
    }
}

loc_80124768:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012474C;
    }
}

loc_80124774:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_8012477C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(128));
}

loc_80124780:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124790;
    }
}

loc_80124784:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 135), static_cast<uint8_t>(r0));
    goto loc_801247D4;
}

loc_80124790:
{
    r0 = (r29 * 12);
    r28_addr_7 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_7);
    r0 = (r0 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012479C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801247C8;
    }
}

loc_801247A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(127));
}

loc_801247A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801247B8;
    }
}

loc_801247A8:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_5 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r0));
    goto loc_801247D4;
}

loc_801247B8:
{
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_801247C8:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_8 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_8, static_cast<uint8_t>(r0));
}

loc_801247D4:
{
    r3 = 0x80280000u;
    r4 = r27;
    r3 = (r3 + -6356);
    r5 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801247ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8012482C;
}

loc_801247F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80124808;
    }
}

loc_801247F8:
{
    r3 = (r3 * 12);
    r28_addr_9 = (r28 + r3);
    r0 = MemoryInline::FlatRead32(r28_addr_9);
    r0 = (r0 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80124804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80124810;
    }
}

loc_80124808:
{
    r3 = 0;
    goto loc_8012482C;
}

loc_80124810:
{
    MemoryInline::FlatWrite32(r29, r26);
    r4 = (r28 + r3);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r29 + 8), r0);
}

loc_8012482C:
{
    r11 = (r1 + 160);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x801245A0 func_801245A0 preserves=true fpr_mask=0x00000000
