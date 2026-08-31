#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80092A70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80092A70;

loc_80092A70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28600), 0, 24u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -28592));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    SetCRFloatResident(cr, 0, f4.d, f5.d);
}

loc_80092A90:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 180u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 24), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 28), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 32), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 36), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 40), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80092AC0;
    }
}

loc_80092ABC:
{
    goto loc_80092AD4;
}

loc_80092AC0:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28588));
    SetCRFloatResident(cr, 0, f4.d, f5.d);
}

loc_80092AC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80092AD0;
    }
}

loc_80092ACC:
{
    goto loc_80092AD4;
}

loc_80092AD0:
{
    f5.d = f4.d;
}

loc_80092AD4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28600));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r3 + 172), f5.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80092AE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80092AEC;
    }
}

loc_80092AE8:
{
    goto loc_80092B00;
}

loc_80092AEC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28596));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80092AF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80092AFC;
    }
}

loc_80092AF8:
{
    goto loc_80092B00;
}

loc_80092AFC:
{
    f1.d = f0.d;
}

loc_80092B00:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -28584));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r3 + 176), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80092B10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80092B18;
    }
}

loc_80092B14:
{
    goto loc_80092B2C;
}

loc_80092B18:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -28588));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80092B20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80092B28;
    }
}

loc_80092B24:
{
    goto loc_80092B2C;
}

loc_80092B28:
{
    f2.d = f0.d;
}

loc_80092B2C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -28580));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r3 + 180), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80092B3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80092B44;
    }
}

loc_80092B40:
{
    goto loc_80092B58;
}

loc_80092B44:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28596));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80092B4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80092B54;
    }
}

loc_80092B50:
{
    goto loc_80092B58;
}

loc_80092B54:
{
    f1.d = f0.d;
}

loc_80092B58:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28600));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r3 + 184), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80092B68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80092B70;
    }
}

loc_80092B6C:
{
    goto loc_80092B84;
}

loc_80092B70:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28596));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80092B78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80092B80;
    }
}

loc_80092B7C:
{
    goto loc_80092B84;
}

loc_80092B80:
{
    f2.d = f0.d;
}

loc_80092B84:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r31 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28596));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80092B94:
{
    MemoryInline::WriteResolvedFloat32(guest_range_2, 172u, (r3 + 196), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r3 + 188), r31);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r3 + 192), r31);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 176u, (r3 + 200), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80092BB0;
    }
}

loc_80092BA8:
{
    r3 = 1;
    goto loc_80092BFC;
}

loc_80092BB0:
{
    r3 = (r3 + 44);
    // inline leaf 0x8012CEB4 (3 guest instruction(s))
    r3 = 65536;
    r3 = (r3 + -27136);
    // end of inlined leaf 0x8012CEB4
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_80092BC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80092BD0;
    }
}

loc_80092BCC:
{
    goto loc_80092BD8;
}

loc_80092BD0:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r31 = (r0 - r4);
}

loc_80092BD8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_80092BDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80092BE8;
    }
}

loc_80092BE0:
{
    r3 = 0;
    goto loc_80092BFC;
}

loc_80092BE8:
{
    r3 = (r30 + 44);
    ctx->lr = 0x80092BF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012D11Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80092BFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80092A70 func_80092A70 preserves=true fpr_mask=0x00000000
