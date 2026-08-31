#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057A8B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057A8B4;

loc_8057A8B4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 1;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r8 = 1;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0x808B0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 104u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r30 = (r30 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r9 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteFloat32((r3 + 344), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 648), f0.d);
    r10 = MemoryInline::FlatRead32((r9 + 4));
    r11 = MemoryInline::FlatRead32((r10 + 4));
    r0 = (r11 & 16);
}

loc_8057A90C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A920;
    }
}

loc_8057A910:
{
    r0 = MemoryInline::FlatRead32((r10 + 8));
    r0 = (r0 & 27);
}

loc_8057A918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A920;
    }
}

loc_8057A91C:
{
    r4 = 0;
}

loc_8057A920:
{
}

loc_8057A924:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8057A940;
    }
}

loc_8057A928:
{
    r4 = 34340864;
    r5 = MemoryInline::FlatRead32((r10 + 12));
    r0 = (r4 + 256);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A940;
    }
}

loc_8057A93C:
{
    r8 = 0;
}

loc_8057A940:
{
}

loc_8057A944:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8057A960;
    }
}

loc_8057A948:
{
    r4 = 458752;
    r5 = MemoryInline::FlatRead32((r10 + 20));
    r0 = (r4 + 20096);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A960;
    }
}

loc_8057A95C:
{
    r7 = 0;
}

loc_8057A960:
{
}

loc_8057A964:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8057A978;
    }
}

loc_8057A968:
{
    r0 = MemoryInline::FlatRead32((r10 + 8));
    r0 = (r0 & 1024);
}

loc_8057A970:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057A978;
    }
}

loc_8057A974:
{
    r6 = 0;
}

loc_8057A978:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8057A97C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057AB4C;
    }
}

loc_8057A980:
{
    r0 = (r11 & 524288);
}

loc_8057A984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057A9B8;
    }
}

loc_8057A988:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_8057A990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057A9B8;
    }
}

loc_8057A994:
{
    r4 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r31 + 96));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 648), f0.d);
    goto loc_8057AA0C;
}

loc_8057A9B8:
{
    r5 = MemoryInline::FlatRead32((r9 + 4));
    r4 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 136));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 648), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2048);
}

loc_8057A9D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057A9F0;
    }
}

loc_8057A9DC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 160));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 648), f0.d);
    goto loc_8057AA0C;
}

loc_8057A9F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 32768);
}

loc_8057A9F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AA0C;
    }
}

loc_8057A9FC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r31 + 92));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 648), f0.d);
}

loc_8057AA0C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_1 = (r3 & 8);
    r0_mdest_1 = (r0 & -9);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8057AA20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057AA34;
    }
}

loc_8057AA24:
{
    r3 = r29;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f4.d = MemoryInline::FlatReadFloat32((r3 + 96));
    goto loc_8057AA40;
}

loc_8057AA34:
{
    r3 = r29;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f4.d = MemoryInline::FlatReadFloat32((r3 + 84));
}

loc_8057AA40:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 648));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 348));
    f4.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 348), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057AA68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057AA74;
    }
}

loc_8057AA6C:
{
    MemoryInline::FlatWriteFloat32((r29 + 348), f0.d);
    goto loc_8057AA80;
}

loc_8057AA74:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_8057AA78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057AA80;
    }
}

loc_8057AA7C:
{
    MemoryInline::FlatWriteFloat32((r29 + 348), f3.d);
}

loc_8057AA80:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 348));
    MemoryInline::FlatWriteFloat32((r29 + 344), f3.d);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 268435456);
    r0_mrot_2 = (r3 & 8);
    r0_mdest_2 = (r0 & -9);
    r0 = (r0_mdest_2 | r0_mrot_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057AA9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057AB4C;
    }
}

loc_8057AAA0:
{
    r4 = MemoryInline::FlatRead32((r29 + 204));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r29;
    r0 = (r4 ^ -2147483648);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r31 + 96));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 344), f0.d);
    // inline leaf 0x80590664 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80590664
}

loc_8057AADC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057AAE8;
    }
}

loc_8057AAE0:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    goto loc_8057AAEC;
}

loc_8057AAE8:
{
    f4.d = MemoryInline::FlatReadFloat32((r30 + 148));
}

loc_8057AAEC:
{
    r3 = MemoryInline::FlatRead32((r29 + 204));
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 144));
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 344));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r31 + 96));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 344), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057AB30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057AB3C;
    }
}

loc_8057AB34:
{
    MemoryInline::FlatWriteFloat32((r29 + 344), f0.d);
    goto loc_8057AB4C;
}

loc_8057AB3C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057AB44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057AB4C;
    }
}

loc_8057AB48:
{
    MemoryInline::FlatWriteFloat32((r29 + 344), f0.d);
}

loc_8057AB4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000FFB gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057A8B4 func_8057A8B4 preserves=true fpr_mask=0x00000000
