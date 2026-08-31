#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80201A6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_80201A6C;

loc_80201A6C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80201A84:
{
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201AB4;
    }
}

loc_80201A9C:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80201C90;
}

loc_80201AB4:
{
    r3 = 0x80360000u;
    r0 = 0;
    r3 = (r3 + -20912);
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80201AC8:
{
    r4 = 1;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r6))) {
        goto loc_80201AF4;
    }
}

loc_80201AD0:
{
    r3 = (r3 + 131072);
    r0 = (r3 + 32072);
}

loc_80201ADC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80201AF4;
    }
}

loc_80201AE0:
{
    r0 = MemoryInline::FlatRead32(r6);
    r3 = (r0 & 536870912);
    r0 = (r3 + -536870912);
}

loc_80201AF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80201AF8;
    }
}

loc_80201AF4:
{
    r4 = 0;
}

loc_80201AF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80201AFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201B18;
    }
}

loc_80201B00:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80201C90;
}

loc_80201B18:
{
}

loc_80201B1C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80201B28;
    }
}

loc_80201B20:
{
    r26 = 0;
    goto loc_80201B30;
}

loc_80201B28:
{
    r3 = MemoryInline::FlatRead32((r6 + 8));
    r26 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80201B30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80201B34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201B60;
    }
}

loc_80201B38:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r6 + 28), r0);
    goto loc_80201C90;
}

loc_80201B60:
{
    r3 = r26;
    ctx->lr = 0x80201B68u;
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
    InvokeDirectCpu<0x80205CF8u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201B84;
    }
}

loc_80201B70:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r26 + 6228), r3);
    goto loc_80201C90;
}

loc_80201B84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80201B88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201BBC;
    }
}

loc_80201B8C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201B94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201BBC;
    }
}

loc_80201B98:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80201BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201BBC;
    }
}

loc_80201BA4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201BB0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80201BBC;
    }
}

loc_80201BB4:
{
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80201BB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201BD8;
    }
}

loc_80201BBC:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r26 + 6228), r0);
    goto loc_80201C90;
}

loc_80201BD8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80201BE0;
    }
}

loc_80201BDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201BFC;
    }
}

loc_80201BE0:
{
    r4 = 0x80360000u;
    r0 = 38;
    r4 = (r4 + -20912);
    r3 = 38;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r26 + 6228), r0);
    goto loc_80201C90;
}

loc_80201BFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80201C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201C14;
    }
}

loc_80201C04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80201C08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201C14;
    }
}

loc_80201C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80201C10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201C3C;
    }
}

loc_80201C14:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    goto loc_80201C90;
}

loc_80201C3C:
{
    MemoryInline::FlatWrite32((r26 + 5616), r30);
    r3 = r26;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r7 = r30;
    r8 = (r1 + 8);
    ctx->lr = 0x80201C5Cu;
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
    InvokeDirectCpu<0x80200C78u>(ctx);
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
    r4 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201C64:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r4);
    MemoryInline::FlatWrite32((r26 + 5616), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201C90;
    }
}

loc_80201C74:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r3);
    MemoryInline::FlatWrite32((r30 + 28), r3);
}

loc_80201C90:
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
// RECOMP_REGISTRATION base 0x80201A6C func_80201A6C preserves=true fpr_mask=0x00000000
