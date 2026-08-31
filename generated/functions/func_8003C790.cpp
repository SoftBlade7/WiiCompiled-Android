#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003C790(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8003C790;

loc_8003C790:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r6;
    MemoryInline::FlatWrite32((r3 + 176), r0);
    MemoryInline::FlatWrite32((r3 + 180), r0);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 96));
}

loc_8003C7D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8003C7F8;
    }
}

loc_8003C7D4:
{
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    goto loc_8003C8B8;
}

loc_8003C7F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 96));
}

loc_8003C800:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8003C838;
    }
}

loc_8003C804:
{
    r0 = MemoryInline::FlatRead8((r29 + 108));
    r3 = 0;
    r7 = MemoryInline::FlatRead32((r29 + 100));
    r4 = 1;
}

loc_8003C818:
{
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = 2;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003C830;
    }
}

loc_8003C82C:
{
    r9 = 1;
}

loc_8003C830:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    goto loc_8003C858;
}

loc_8003C838:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
}

loc_8003C858:
{
    r0 = MemoryInline::FlatRead8((r31 + 104));
}

loc_8003C860:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8003C898;
    }
}

loc_8003C864:
{
    r0 = MemoryInline::FlatRead8((r29 + 108));
    r3 = 2;
    r7 = MemoryInline::FlatRead32((r29 + 104));
    r4 = 1;
}

loc_8003C878:
{
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = 2;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003C890;
    }
}

loc_8003C88C:
{
    r9 = 1;
}

loc_8003C890:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    goto loc_8003C8B8;
}

loc_8003C898:
{
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
}

loc_8003C8B8:
{
    r3 = 5;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    r7 = MemoryInline::FlatRead8((r29 + 152));
    r4 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r29 + 153));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r29 + 154));
    r0 = MemoryInline::FlatRead8((r29 + 155));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    r7 = MemoryInline::FlatRead8((r29 + 156));
    r4 = (r1 + 8);
    r6 = MemoryInline::FlatRead8((r29 + 157));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r29 + 158));
    r0 = MemoryInline::FlatRead8((r29 + 159));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017039Cu>(ctx);
    r0 = 3;
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 184), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r4));
    r5 = 0;
    r3 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r4));
    ctr = r0;
    // nop
}

loc_8003C968:
{
    r4 = (r31 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 97));
}

loc_8003C974:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003C9A4;
    }
}

loc_8003C978:
{
}

loc_8003C97C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8003C9AC;
    }
}

loc_8003C980:
{
}

loc_8003C984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003C9B4;
    }
}

loc_8003C988:
{
}

loc_8003C98C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8003C9C0;
    }
}

loc_8003C990:
{
}

loc_8003C994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8003C9C8;
    }
}

loc_8003C998:
{
}

loc_8003C99C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8003C9D0;
    }
}

loc_8003C9A0:
{
    goto loc_8003C9D8;
}

loc_8003C9A4:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    goto loc_8003C9D8;
}

loc_8003C9AC:
{
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_8003C9D8;
}

loc_8003C9B4:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_8003C9D8;
}

loc_8003C9C0:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    goto loc_8003C9D8;
}

loc_8003C9C8:
{
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
    goto loc_8003C9D8;
}

loc_8003C9D0:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
}

loc_8003C9D8:
{
    r0 = MemoryInline::FlatRead8((r4 + 105));
}

loc_8003C9E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003CA10;
    }
}

loc_8003C9E4:
{
}

loc_8003C9E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8003CA18;
    }
}

loc_8003C9EC:
{
}

loc_8003C9F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003CA20;
    }
}

loc_8003C9F4:
{
}

loc_8003C9F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8003CA2C;
    }
}

loc_8003C9FC:
{
}

loc_8003CA00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8003CA34;
    }
}

loc_8003CA04:
{
}

loc_8003CA08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8003CA3C;
    }
}

loc_8003CA0C:
{
    goto loc_8003CA44;
}

loc_8003CA10:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    goto loc_8003CA44;
}

loc_8003CA18:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_8003CA44;
}

loc_8003CA20:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_8003CA44;
}

loc_8003CA2C:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    goto loc_8003CA44;
}

loc_8003CA34:
{
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
    goto loc_8003CA44;
}

loc_8003CA3C:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
}

loc_8003CA44:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8003C968;
    }
}

loc_8003CA4C:
{
    r0 = 4;
    r5 = 0;
    r3 = 1;
    ctr = r0;
    // nop
}

loc_8003CA60:
{
    r4 = (r31 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 100));
}

loc_8003CA6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003CA9C;
    }
}

loc_8003CA70:
{
}

loc_8003CA74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8003CAA4;
    }
}

loc_8003CA78:
{
}

loc_8003CA7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003CAAC;
    }
}

loc_8003CA80:
{
}

loc_8003CA84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8003CAB8;
    }
}

loc_8003CA88:
{
}

loc_8003CA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8003CAC0;
    }
}

loc_8003CA90:
{
}

loc_8003CA94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8003CAC8;
    }
}

loc_8003CA98:
{
    goto loc_8003CAD0;
}

loc_8003CA9C:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    goto loc_8003CAD0;
}

loc_8003CAA4:
{
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_8003CAD0;
}

loc_8003CAAC:
{
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 184), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 185), static_cast<uint8_t>(r3));
    goto loc_8003CAD0;
}

loc_8003CAB8:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    goto loc_8003CAD0;
}

loc_8003CAC0:
{
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
    goto loc_8003CAD0;
}

loc_8003CAC8:
{
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 186), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 187), static_cast<uint8_t>(r3));
}

loc_8003CAD0:
{
    r0 = MemoryInline::FlatRead8((r4 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8003CAD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CB08;
    }
}

loc_8003CADC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8003CAE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CB10;
    }
}

loc_8003CAE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8003CAE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CB18;
    }
}

loc_8003CAEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8003CAF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CB24;
    }
}

loc_8003CAF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8003CAF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CB2C;
    }
}

loc_8003CAFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8003CB00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CB34;
    }
}

loc_8003CB04:
{
    goto loc_8003CB3C;
}

loc_8003CB08:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    goto loc_8003CB3C;
}

loc_8003CB10:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_8003CB3C;
}

loc_8003CB18:
{
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 188), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 189), static_cast<uint8_t>(r3));
    goto loc_8003CB3C;
}

loc_8003CB24:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    goto loc_8003CB3C;
}

loc_8003CB2C:
{
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
    goto loc_8003CB3C;
}

loc_8003CB34:
{
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 190), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 191), static_cast<uint8_t>(r3));
}

loc_8003CB3C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8003CA60;
    }
}

loc_8003CB44:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8003C790 func_8003C790 preserves=true fpr_mask=0x00000000
