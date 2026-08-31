#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B883C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_805B883C;

loc_805B883C:
{
    r4 = 0x80890000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 156u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10152));
    r6 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 28), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r1 + 152), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 36), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r1 + 64), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r1 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r1 + 120), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r1 + 148), f0.d);
    goto loc_805B891C;
}

loc_805B8874:
{
    r0 = (r6 & 65535);
    r4 = MemoryInline::FlatRead32((r3 + 140));
    r0 = (r0 * 48);
    r4_addr_2 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead16(r5);
}

loc_805B888C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8918;
    }
}

loc_805B8890:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    f1.d = std::fabs(f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805B88C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B88C8;
    }
}

loc_805B88C4:
{
    goto loc_805B88CC;
}

loc_805B88C8:
{
    f3.d = f0.d;
}

loc_805B88CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805B88E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B88EC;
    }
}

loc_805B88E8:
{
    goto loc_805B88F0;
}

loc_805B88EC:
{
    f3.d = f0.d;
}

loc_805B88F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = std::fabs(f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B8908:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B8910;
    }
}

loc_805B890C:
{
    goto loc_805B8914;
}

loc_805B8910:
{
    f1.d = f0.d;
}

loc_805B8914:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
}

loc_805B8918:
{
    r6 = (r6 + 1);
}

loc_805B891C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r6 & 65535);
}

loc_805B8928:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_805B8874;
    }
}

loc_805B892C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_805B893C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B8954;
    }
}

loc_805B8940:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805B8944:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B894C;
    }
}

loc_805B8948:
{
    goto loc_805B8968;
}

loc_805B894C:
{
    f2.d = f0.d;
    goto loc_805B8968;
}

loc_805B8954:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B8958:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B8960;
    }
}

loc_805B895C:
{
    goto loc_805B8964;
}

loc_805B8960:
{
    f1.d = f0.d;
}

loc_805B8964:
{
    f2.d = f1.d;
}

loc_805B8968:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10160));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B883C func_805B883C preserves=true fpr_mask=0x00000000
