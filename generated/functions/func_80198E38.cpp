#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80198E38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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

    goto loc_80198E38;

loc_80198E38:
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
    r5 = (r5 + 3);
    r0 = MemoryInline::FlatRead32((r4 + -12));
    r29 = (r5 & -4);
    r30 = (r4 + -16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_80198E60:
{
    r27 = r3;
    r28 = r4;
    r31 = (r3 + 60);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80198E78;
    }
}

loc_80198E70:
{
    r3 = r29;
    goto loc_80199020;
}

loc_80198E78:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80198E80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198E8C;
    }
}

loc_80198E84:
{
    r3 = (r3 + 32);
    ctx->lr = 0x80198E8Cu;
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
    InvokeDirectCpu<0x801A7EE4u>(ctx);
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
}

loc_80198E8C:
{
    r26 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r26));
}

loc_80198E94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80198FD4;
    }
}

loc_80198E98:
{
    r3 = (r30 + r26);
    r7 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 16);
    goto loc_80198EB4;
}

loc_80198EA8:
{
}

loc_80198EAC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_80198EBC;
    }
}

loc_80198EB0:
{
    r7 = MemoryInline::FlatRead32((r7 + 12));
}

loc_80198EB4:
{
}

loc_80198EB8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80198EA8;
    }
}

loc_80198EBC:
{
}

loc_80198EC0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80198ED8;
    }
}

loc_80198EC4:
{
    r4 = MemoryInline::FlatRead32((r7 + 4));
    r3 = (r26 + r4);
    r0 = (r3 + 16);
}

loc_80198ED4:
{
    if ((static_cast<uint32_t>(r29) <= static_cast<uint32_t>(r0))) {
        goto loc_80198EF4;
    }
}

loc_80198ED8:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80198EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198EEC;
    }
}

loc_80198EE4:
{
    r3 = (r27 + 32);
    ctx->lr = 0x80198EECu;
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
    InvokeDirectCpu<0x801A7FC0u>(ctx);
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
}

loc_80198EEC:
{
    r3 = 0;
    goto loc_80199020;
}

loc_80198EF4:
{
    r5 = MemoryInline::FlatRead32((r7 + 8));
    r3 = (r7 + r4);
    r0 = MemoryInline::FlatRead16((r7 + 2));
    r6 = (r3 + 16);
}

loc_80198F08:
{
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 127);
    r3 = (r7 - r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80198F20;
    }
}

loc_80198F18:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    goto loc_80198F24;
}

loc_80198F20:
{
    MemoryInline::FlatWrite32(r31, r4);
}

loc_80198F24:
{
}

loc_80198F28:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80198F34;
    }
}

loc_80198F2C:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_80198F38;
}

loc_80198F34:
{
    MemoryInline::FlatWrite32((r31 + 4), r5);
}

loc_80198F38:
{
    r7 = (r29 + r28);
    r0 = (r6 - r7);
}

loc_80198F44:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(16))) {
        goto loc_80198F4C;
    }
}

loc_80198F48:
{
    r7 = r6;
}

loc_80198F4C:
{
    r0 = (r6 - r7);
    r4 = (r7 - r28);
}

loc_80198F58:
{
    MemoryInline::FlatWrite32((r30 + 4), r4);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16))) {
        goto loc_80198FB8;
    }
}

loc_80198F60:
{
    r4 = 18002;
    r0 = (r7 + 16);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r4));
    r4 = 0;
    r0 = (r6 - r0);
}

loc_80198F78:
{
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    MemoryInline::FlatWrite32((r7 + 12), r4);
    MemoryInline::FlatWrite32((r7 + 8), r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80198F98;
    }
}

loc_80198F8C:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r5 + 12), r7);
    goto loc_80198FA0;
}

loc_80198F98:
{
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32(r31, r7);
}

loc_80198FA0:
{
}

loc_80198FA4:
{
    MemoryInline::FlatWrite32((r7 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80198FB4;
    }
}

loc_80198FAC:
{
    MemoryInline::FlatWrite32((r4 + 8), r7);
    goto loc_80198FB8;
}

loc_80198FB4:
{
    MemoryInline::FlatWrite32((r31 + 4), r7);
}

loc_80198FB8:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r5 = (r7 - r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80198FC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80199008;
    }
}

loc_80198FC8:
{
    r4 = 0;
    ctx->lr = 0x80198FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80199008;
}

loc_80198FD4:
{
    r0 = (r29 + r28);
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r30 + r0);
    r0 = (r5 + 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWrite32((r30 + 4), r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80199000:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80199008;
    }
}

loc_80199004:
{
    MemoryInline::FlatWrite32((r30 + 4), r26);
}

loc_80199008:
{
    r0 = MemoryInline::FlatRead32((r27 + 56));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80199010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019901C;
    }
}

loc_80199014:
{
    r3 = (r27 + 32);
    ctx->lr = 0x8019901Cu;
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
    InvokeDirectCpu<0x801A7FC0u>(ctx);
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
}

loc_8019901C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80199020:
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
// RECOMP_REGISTRATION base 0x80198E38 func_80198E38 preserves=true fpr_mask=0x00000000
