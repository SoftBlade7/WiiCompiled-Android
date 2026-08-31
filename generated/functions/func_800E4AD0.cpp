#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8011E488_statefree(uint32_t);

extern "C" void func_800E4AD0(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800E4AD0;

loc_800E4AD0:
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
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r29 = 0;
    r28 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_B68 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_B68);
    } else {
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
        InvokeDirectCpu<0x8011E488u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_800E4AFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E4C70;
    }
}

loc_800E4B00:
{
    r26 = 0x80250000u;
    r27 = 0;
    r26 = (r26 + -14688);
    r30 = 0x80270000u;
    goto loc_800E4B4C;
}

loc_800E4B14:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = r27;
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->lr = 0x800E4B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = (r30 + 31868);
    r5 = -1;
    ctx->lr = 0x800E4B30u;
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
    InvokeDirectCpu<0x8011D2B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800E4B34:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r29))) {
        goto loc_800E4B3C;
    }
}

loc_800E4B38:
{
    r29 = r3;
}

loc_800E4B3C:
{
    r0 = MemoryInline::FlatRead32(r26);
    r26 = (r26 + 4);
    r27 = (r27 + 1);
    r28 = (r28 + r0);
}

loc_800E4B4C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_187F = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_187F);
    } else {
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
        InvokeDirectCpu<0x8011E488u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r3));
}

loc_800E4B5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E4B14;
    }
}

loc_800E4B60:
{
    r3 = 100;
    ctx->lr = 0x800E4B68u;
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
    InvokeDirectCpu<0x800CDED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r26 = 0x80250000u;
    r30 = r3;
    r27 = (r1 + 8);
    r31 = 0;
    r26 = (r26 + -14688);
    goto loc_800E4BE8;
}

loc_800E4B80:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_22D1 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_22D1);
    } else {
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
        InvokeDirectCpu<0x8011E488u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_800E4B94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E4BAC;
    }
}

loc_800E4B98:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r1 + 8);
    r4 = 100;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
    goto loc_800E4BFC;
}

loc_800E4BAC:
{
    r0 = MemoryInline::FlatRead32(r26);
}

loc_800E4BB4:
{
    r0 = (r0 * 100);
    r3 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r28));
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(0))) {
        goto loc_800E4BC8;
    }
}

loc_800E4BC0:
{
    r0 = MemoryInline::FlatRead32((r27 + -4));
    goto loc_800E4BCC;
}

loc_800E4BC8:
{
    r0 = 0;
}

loc_800E4BCC:
{
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_800E4BD4:
{
    MemoryInline::FlatWrite32(r27, r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E4BFC;
    }
}

loc_800E4BDC:
{
    r27 = (r27 + 4);
    r26 = (r26 + 4);
    r31 = (r31 + 1);
}

loc_800E4BE8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8011E488u) && KnownTranslatedCpuCall<0x8011E488u>::kAvailable && !KnownTranslatedCpuCall<0x8011E488u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E488u>()) {
        const auto state_free_result_8011E488_2D70 = func_8011E488_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8011E488_2D70);
    } else {
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
        InvokeDirectCpu<0x8011E488u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r3));
}

loc_800E4BF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E4B80;
    }
}

loc_800E4BFC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r1 + 8);
    r4 = 0x80280000u;
    r3_addr_3 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_3);
    r5 = r31;
    r7 = r30;
    r4 = (r4 + -28816);
    r3 = 64;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800E4C24u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80000000u;
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_800E4C30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4C38;
    }
}

loc_800E4C34:
{
    r29 = (r29 + 1);
}

loc_800E4C38:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->lr = 0x800E4C48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8011E480u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r28 = 0x80270000u;
    r5 = r29;
    r4 = (r28 + 31868);
    ctx->lr = 0x800E4C58u;
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
    InvokeDirectCpu<0x8011D1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = (r28 + 31868);
    r4 = 0;
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 1756));
    ctx->lr = 0x800E4C70u;
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
    InvokeDirectCpu<0x8011E490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800E4C70:
{
    r11 = (r1 + 64);
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
// RECOMP_REGISTRATION base 0x800E4AD0 func_800E4AD0 preserves=true fpr_mask=0x00000000
