#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80800FBC(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80800FBC;

loc_80800FBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r8 = 1127219200;
    r7 = 0x808B0000u;
    r6 = (r4 ^ -2147483648);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 368), 0, 20u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 368));
    r5 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    r0 = (r9 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r7 + -20968));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 20216));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80801008:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80801014;
    }
}

loc_8080100C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 376));
    goto loc_808011C4;
}

loc_80801014:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r9));
}

loc_80801018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80801040;
    }
}

loc_8080101C:
{
    r0 = (r9 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 376));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_808011C4;
}

loc_80801040:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 20220));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_80801068:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8080107C;
    }
}

loc_80801070:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -21040));
    goto loc_808011C4;
}

loc_8080107C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_808010A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808010D4;
    }
}

loc_808010A4:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 380));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_808011C4;
}

loc_808010D4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 372));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_808010FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80801108;
    }
}

loc_80801100:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 380));
    goto loc_808011C4;
}

loc_80801108:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_8080110C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80801134;
    }
}

loc_80801110:
{
    r0 = (r5 - r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 380));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_808011C4;
}

loc_80801134:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_80801154:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80801168;
    }
}

loc_8080115C:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -21040));
    goto loc_808011C4;
}

loc_80801168:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_8080118C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808011C0;
    }
}

loc_80801190:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 384));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f5.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_808011C4;
}

loc_808011C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 384));
}

loc_808011C4:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000027B gpr_write=0x000003EB gpr_return=0x00000008 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80800FBC func_80800FBC preserves=true fpr_mask=0x00000000
