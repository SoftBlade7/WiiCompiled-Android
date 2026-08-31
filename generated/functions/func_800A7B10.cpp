#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A7B10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A7B10;

loc_800A7B10:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead8((r3 + 298));
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7B34:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 356), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7D24;
    }
}

loc_800A7B40:
{
    r4 = MemoryInline::FlatRead32((r3 + 252));
    r8 = MemoryInline::FlatRead32((r3 + 332));
    r0 = (r4 + -1);
}

loc_800A7B50:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_800A7B5C;
    }
}

loc_800A7B54:
{
    r31 = MemoryInline::FlatRead32((r3 + 256));
    goto loc_800A7B60;
}

loc_800A7B5C:
{
    r31 = MemoryInline::FlatRead32((r3 + 272));
}

loc_800A7B60:
{
    r4 = MemoryInline::FlatRead32((r3 + 256));
    r30 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 228));
    r7 = MemoryInline::FlatRead16((r3 + 236));
    r4 = (r4 * r0);
    r0 = MemoryInline::FlatRead32((r3 + 328));
    r6 = MemoryInline::FlatRead32((r3 + 2092));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7B80:
{
    r5 = MemoryInline::FlatRead32((r3 + 248));
    r0 = (r7 + r4);
    r4 = (r31 * r6);
    r0 = (r8 * r0);
    r27 = (r7 + r4);
    r26 = (r5 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7BAC;
    }
}

loc_800A7B9C:
{
    r0 = MemoryInline::FlatRead32((r3 + 220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800A7BA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7BAC;
    }
}

loc_800A7BA8:
{
    r30 = 1;
}

loc_800A7BAC:
{
    r3 = (r3 + 412);
    ctx->lr = 0x800A7BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80095A90u>(ctx);
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

loc_800A7BB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7BC4;
    }
}

loc_800A7BBC:
{
    r28 = 0;
    goto loc_800A7C10;
}

loc_800A7BC4:
{
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A7C10;
    }
}

loc_800A7BCC:
{
    r5 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r5);
    r4 = 0x80270000u;
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
    r4 = (r4 + 19152);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 12), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 40), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r5);
    }
}

loc_800A7C10:
{
    MemoryInline::FlatWrite32((r28 + 16), r29);
    r0 = MemoryInline::FlatRead32((r29 + 2084));
    MemoryInline::FlatWrite32((r28 + 20), r0);
    MemoryInline::FlatWrite32((r28 + 24), r27);
    MemoryInline::FlatWrite32((r28 + 28), r26);
    MemoryInline::FlatWrite32((r28 + 32), r31);
    r0 = MemoryInline::FlatRead32((r29 + 328));
    MemoryInline::FlatWrite32((r28 + 36), r0);
    MemoryInline::FlatWrite8((r28 + 40), static_cast<uint8_t>(r30));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r29 + 404);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r30 = r3;
    r3 = (r29 + 400);
    r4 = (r1 + 8);
    r5 = (r28 + 44);
    // inline leaf 0x800AF340 (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r6);
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r6, r5);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    // end of inlined leaf 0x800AF340
    r0 = MemoryInline::FlatRead8((r29 + 286));
    r31 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A7C68;
    }
}

loc_800A7C64:
{
    r31 = 2;
}

loc_800A7C68:
{
    ctx->lr = 0x800A7C6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A8F70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r28;
    r5 = r31;
    ctx->lr = 0x800A7C78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A9100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 332));
    r0 = MemoryInline::FlatRead32((r29 + 352));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 332), r3);
}

loc_800A7C8C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_800A7CBC;
    }
}

loc_800A7C90:
{
    r0 = MemoryInline::FlatRead8((r29 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7C98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A7CA8;
    }
}

loc_800A7C9C:
{
    r0 = MemoryInline::FlatRead32((r29 + 348));
    MemoryInline::FlatWrite32((r29 + 332), r0);
    goto loc_800A7CBC;
}

loc_800A7CA8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 298), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800A7D24;
}

loc_800A7CBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    r0 = MemoryInline::FlatRead32((r29 + 324));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 328), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800A7CD0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A7D1C;
    }
}

loc_800A7CD4:
{
    r5 = MemoryInline::FlatRead32((r29 + 352));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 332));
    r6 = MemoryInline::FlatRead32((r29 + 320));
    r0 = MemoryInline::FlatRead32((r29 + 348));
    r3 = (r5 - r3);
    MemoryInline::FlatWrite32((r29 + 328), r4);
    r4 = (r3 + 1);
    r7 = (r6 + 1);
    r3 = (r5 - r0);
    r4 = (r7 - r4);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7D18;
    }
}

loc_800A7D14:
{
    r6 = r7;
}

loc_800A7D18:
{
    MemoryInline::FlatWrite32((r29 + 324), r6);
}

loc_800A7D1C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800A7D24:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
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
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A7B10 func_800A7B10 preserves=true fpr_mask=0x00000000
