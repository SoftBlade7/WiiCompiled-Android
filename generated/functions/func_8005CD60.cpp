#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005CD60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8005CD60;

loc_8005CD60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8005CD78:
{
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CD98;
    }
}

loc_8005CD8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8005CD90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CEB8;
    }
}

loc_8005CD94:
{
    goto loc_8005CF28;
}

loc_8005CD98:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = r30;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 100));
}

loc_8005CDB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CDC0;
    }
}

loc_8005CDB8:
{
    r4 = (r3 + r0);
    goto loc_8005CE00;
}

loc_8005CDC0:
{
    r4 = 0;
    goto loc_8005CE00;
}

loc_8005CDC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
}

loc_8005CDD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CDDC;
    }
}

loc_8005CDD4:
{
    r3 = (r3 + r0);
    goto loc_8005CDE0;
}

loc_8005CDDC:
{
    r3 = 0;
}

loc_8005CDE0:
{
}

loc_8005CDE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005CE08;
    }
}

loc_8005CDE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
}

loc_8005CDF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CDFC;
    }
}

loc_8005CDF4:
{
    r4 = (r3 + r0);
    goto loc_8005CE00;
}

loc_8005CDFC:
{
    r4 = 0;
}

loc_8005CE00:
{
}

loc_8005CE04:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8005CDC8;
    }
}

loc_8005CE08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8005CE0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CE24;
    }
}

loc_8005CE10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CE1C;
    }
}

loc_8005CE14:
{
    r27 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_8005CE30;
}

loc_8005CE1C:
{
    r27 = 0;
    goto loc_8005CE30;
}

loc_8005CE24:
{
    r3 = (r1 + 24);
    // inline leaf 0x8004E400 (13 guest instruction(s))
}

loc_inl1_0x8004E400:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl1_0x8004E40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E418;
    }
}

loc_inl1_0x8004E410:
{
    r3 = (r3 + r0);
    goto loc_inl1_0x8004E41C;
}

loc_inl1_0x8004E418:
{
    r3 = 0;
}

loc_inl1_0x8004E41C:
{
}

loc_inl1_0x8004E420:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004E42C;
    }
}

loc_inl1_0x8004E424:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_8004E400;
}

loc_inl1_0x8004E42C:
{
    r3 = 0;
}

loc_inl1_cont_8004E400:
{
    // end of inlined leaf 0x8004E400
    r27 = r3;
}

loc_8005CE30:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r26 = (r26_rot_1 & -2);
    goto loc_8005CEAC;
}

loc_8005CE38:
{
    r3 = r29;
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8005CE4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CE5C;
    }
}

loc_8005CE50:
{
    r3 = (r3 + r0);
    r0 = (r3 + -4);
    goto loc_8005CE60;
}

loc_8005CE5C:
{
    r0 = 0;
}

loc_8005CE60:
{
    r4 = MemoryInline::FlatRead32((r28 + 44));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005CE6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CE78;
    }
}

loc_8005CE70:
{
    r5 = (r4 + r3);
    goto loc_8005CE7C;
}

loc_8005CE78:
{
    r5 = 0;
}

loc_8005CE7C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 16);
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    ctx->lr = 0x8005CE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C1D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005CE94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8005CEA4;
    }
}

loc_8005CE98:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
    r31 = 1;
    r4_addr_3 = (r4 + r26);
    MemoryInline::FlatWrite16(r4_addr_3, static_cast<uint16_t>(r3));
}

loc_8005CEA4:
{
    r26 = (r26 + 2);
    r30 = (r30 + 1);
}

loc_8005CEAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r27));
}

loc_8005CEB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8005CE38;
    }
}

loc_8005CEB4:
{
    goto loc_8005CF28;
}

loc_8005CEB8:
{
    r3 = r29;
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8005CECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CEDC;
    }
}

loc_8005CED0:
{
    r3 = (r3 + r0);
    r0 = (r3 + -4);
    goto loc_8005CEE0;
}

loc_8005CEDC:
{
    r0 = 0;
}

loc_8005CEE0:
{
    r4 = MemoryInline::FlatRead32((r28 + 44));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8005CEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CEF8;
    }
}

loc_8005CEF0:
{
    r5 = (r4 + r3);
    goto loc_8005CEFC;
}

loc_8005CEF8:
{
    r5 = 0;
}

loc_8005CEFC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    ctx->lr = 0x8005CF10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C1D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8005CF14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8005CF28;
    }
}

loc_8005CF18:
{
    r4 = MemoryInline::FlatRead32((r28 + 20));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r31 = 1;
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r3));
}

loc_8005CF28:
{
    r3 = r28;
    r4 = 4;
    r5 = 1;
    // inline leaf 0x80060570 (10 guest instruction(s))
}

loc_inl2_0x80060570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl2_0x80060574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80060588;
    }
}

loc_inl2_0x80060578:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_inl2_cont_80060570;
}

loc_inl2_0x80060588:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_inl2_cont_80060570:
{
    // end of inlined leaf 0x80060570
    r11 = (r1 + 64);
    r3 = r31;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005CD60 func_8005CD60 preserves=true fpr_mask=0x00000000
