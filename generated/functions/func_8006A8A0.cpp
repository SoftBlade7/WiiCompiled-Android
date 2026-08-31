#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A8A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A8A0;

loc_8006A8A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8006A8AC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A960;
    }
}

loc_8006A8B4:
{
    r5 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006A8BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A960;
    }
}

loc_8006A8C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 112), 0, 108u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 112));
    r0 = (r3 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A8C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A8FC;
    }
}

loc_8006A8CC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r5 + 208));
    r3 = r4;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r5 + 188));
    f6.d = (-(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r5 + 192));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r5 + 196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r5 + 200));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r5 + 204));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r5 + 212));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r5 + 216));
        }
    }
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019A894u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_8006A960;
}

loc_8006A8FC:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006A900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A93C;
    }
}

loc_8006A904:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r5 + 216));
    r3 = r4;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r5 + 208));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r5 + 188));
    f7.d = (-(f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r5 + 192));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r5 + 196));
        }
    }
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r5 + 200));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r5 + 180));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r5 + 204));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r5 + 212));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8019A6F8u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    goto loc_8006A960;
}

loc_8006A93C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r5 + 208));
    r3 = r4;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r5 + 172));
    f4.d = (-(f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r5 + 176));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r5 + 204));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r5 + 212));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r5 + 216));
        }
    }
    ctx->lr = 0x8006A960u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019A79Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8006A960:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006A8A0 func_8006A8A0 preserves=true fpr_mask=0x00000000
