#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80598890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80598890;

loc_80598890:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 7960);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r5 & 262144);
}

loc_805988D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805988E8;
    }
}

loc_805988D4:
{
    r0 = (r5 & 524288);
}

loc_805988D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805988E8;
    }
}

loc_805988DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1);
}

loc_805988E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805988F4;
    }
}

loc_805988E8:
{
    r4 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r4 + 26008));
    f1.d = MemoryInline::FlatReadFloat32(r4);
}

loc_805988F4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    r3 = r29;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80598918:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80598A3C;
    }
}

loc_8059891C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059892C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805989DC;
    }
}

loc_80598930:
{
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r30 = (r3 + 92);
    r3 = r29;
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    f3.d = MemoryInline::FlatReadFloat32(r3);
    r4 = r3;
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r5 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 8);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x805989A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = f31.d;
    ctx->lr = 0x805989ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805989B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805989BC;
    }
}

loc_805989B8:
{
    goto loc_805989C0;
}

loc_805989BC:
{
    f1.d = (-(f1.d));
}

loc_805989C0:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 152), f0.d);
    goto loc_80598A08;
}

loc_805989DC:
{
    r0 = (r3 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805989E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805989EC;
    }
}

loc_805989E4:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 64));
    goto loc_805989F0;
}

loc_805989EC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 68));
}

loc_805989F0:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 152));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 152), f0.d);
}

loc_80598A08:
{
    r3 = r29;
    // inline leaf 0x80590CBC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 204);
    // end of inlined leaf 0x80590CBC
    f1.d = MemoryInline::FlatReadFloat32((r29 + 152));
    r4 = r3;
    r3 = (r1 + 24);
    ctx->lr = 0x80598A20u;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = r29;
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    r4 = r3;
    r3 = (r1 + 24);
    r5 = (r29 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    goto loc_80598AA4;
}

loc_80598A3C:
{
    r3 = r29;
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 104), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r29 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r29 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r29 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r29 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r29 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r29 + 136), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r29 + 140), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r29 + 144), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r29 + 148), f0.d);
}

loc_80598AA4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 116));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0xC000C0FA fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80598890 func_80598890 preserves=false fpr_mask=0x80000000
