#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060265C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8060265C;

loc_8060265C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r7 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r7 = (r7 + 26656);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
}

loc_80602684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80602694;
    }
}

loc_80602688:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8060268C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806026C4;
    }
}

loc_80602690:
{
    goto loc_80602794;
}

loc_80602694:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 16));
}

loc_8060269C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806026AC;
    }
}

loc_806026A0:
{
}

loc_806026A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_806026B8;
    }
}

loc_806026A8:
{
    goto loc_806026F8;
}

loc_806026AC:
{
    f6.d = MemoryInline::FlatReadFloat32((r7 + 8));
    f5.d = MemoryInline::FlatReadFloat32((r7 + 4));
    goto loc_806026F8;
}

loc_806026B8:
{
    f6.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r7 + 8));
    goto loc_806026F8;
}

loc_806026C4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 16));
}

loc_806026CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806026DC;
    }
}

loc_806026D0:
{
}

loc_806026D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_806026E8;
    }
}

loc_806026D8:
{
    goto loc_806026F8;
}

loc_806026DC:
{
    f6.d = MemoryInline::FlatReadFloat32((r7 + 8));
    f5.d = MemoryInline::FlatReadFloat32(r7);
    goto loc_806026F8;
}

loc_806026E8:
{
    f6.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f5.d = MemoryInline::FlatReadFloat32(r7);
}

loc_806026F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_806026FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 28));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060270C;
    }
}

loc_80602704:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 24));
    goto loc_80602710;
}

loc_8060270C:
{
    f4.d = MemoryInline::FlatReadFloat32(r7);
}

loc_80602710:
{
    r4 = 0x80890000u;
    r6 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 26680));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r6);
    r5 = 0x808C0000u;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r7 + 16));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r5 = (r5 + -22980);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 20));
    r31 = 1;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r4 = (r1 + 8);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r3 + 36);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r31));
    ctx->lr = 0x80602784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805C2AD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060278C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80602794;
    }
}

loc_80602790:
{
    MemoryInline::FlatWrite8((r30 + 12), static_cast<uint8_t>(r31));
}

loc_80602794:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8060265C func_8060265C preserves=true fpr_mask=0x00000000
