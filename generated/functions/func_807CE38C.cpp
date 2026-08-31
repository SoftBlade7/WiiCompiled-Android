#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CE38C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807CE38C;

loc_807CE38C:
{
    f29.d = MemoryInline::FlatReadFloat32((r30 + 32));
    r3 = r29;
    f28.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f27.d = MemoryInline::FlatReadFloat32((r30 + 56));
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
}

loc_807CE3AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CE458;
    }
}

loc_807CE3B0:
{
    r0 = MemoryInline::FlatRead16((r29 + 250));
}

loc_807CE3B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_807CE404;
    }
}

loc_807CE3BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
}

loc_807CE3C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CE3D4;
    }
}

loc_807CE3C8:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807CE3D8;
}

loc_807CE3D4:
{
    r3 = 0;
}

loc_807CE3D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CE3DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CE3EC;
    }
}

loc_807CE3E0:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    ctx->lr = 0x807CE3E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055F28Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807CE3F0;
}

loc_807CE3EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
}

loc_807CE3F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_807CE404:
{
    r0 = MemoryInline::FlatRead16((r29 + 252));
}

loc_807CE40C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_807CE458;
    }
}

loc_807CE410:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
}

loc_807CE418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CE428;
    }
}

loc_807CE41C:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807CE42C;
}

loc_807CE428:
{
    r3 = 0;
}

loc_807CE42C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CE430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CE458;
    }
}

loc_807CE434:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    ctx->lr = 0x807CE43Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055F28Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_807CE458:
{
    r0 = MemoryInline::FlatRead16((r29 + 250));
}

loc_807CE460:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_807CE478;
    }
}

loc_807CE464:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r29 + 824), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r29 + 828), f0.d);
    goto loc_807CE4C0;
}

loc_807CE478:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 824));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807CE48C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE494;
    }
}

loc_807CE490:
{
    goto loc_807CE498;
}

loc_807CE494:
{
    f2.d = f0.d;
}

loc_807CE498:
{
    MemoryInline::FlatWriteFloat32((r29 + 824), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 828));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807CE4B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE4B8;
    }
}

loc_807CE4B4:
{
    goto loc_807CE4BC;
}

loc_807CE4B8:
{
    f2.d = f0.d;
}

loc_807CE4BC:
{
    MemoryInline::FlatWriteFloat32((r29 + 828), f2.d);
}

loc_807CE4C0:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807CE4C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE4D4;
    }
}

loc_807CE4CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    goto loc_807CE4D8;
}

loc_807CE4D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
}

loc_807CE4D8:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807CE4E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE4EC;
    }
}

loc_807CE4E4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 36));
    goto loc_807CE4F0;
}

loc_807CE4EC:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
}

loc_807CE4F0:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807CE4F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE504;
    }
}

loc_807CE4FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    goto loc_807CE508;
}

loc_807CE504:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
}

loc_807CE508:
{
    f10.d = PpcFmulsInline(f31.d, f1.d);
    f11.d = MemoryInline::FlatReadFloat32((r29 + 776));
    f6.d = PpcFmulsInline(f31.d, f2.d);
    f7.d = MemoryInline::FlatReadFloat32((r29 + 784));
    f2.d = PpcFmulsInline(f31.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 792));
    f8.d = PpcFmulsInline(f30.d, f29.d);
    f9.d = MemoryInline::FlatReadFloat32((r29 + 780));
    f4.d = PpcFmulsInline(f30.d, f28.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 788));
    f0.d = PpcFmulsInline(f30.d, f27.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 796));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f11.d));
    f12.d = MemoryInline::FlatReadFloat32((r29 + 824));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f9.d));
    f13.d = MemoryInline::FlatReadFloat32((r29 + 828));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f7.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f10.d = PpcFmulsInline(f12.d, f10.d);
    f8.d = PpcFmulsInline(f12.d, f8.d);
    f6.d = PpcFmulsInline(f13.d, f6.d);
    f4.d = PpcFmulsInline(f13.d, f4.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f0.d = PpcFmulsInline(f13.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f10.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f8.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    MemoryInline::FlatWriteFloat32((r29 + 776), f10.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 780), f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 784), f6.d);
    MemoryInline::FlatWriteFloat32((r29 + 788), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 792), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 796), f0.d);
}

loc_807CE68C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 76u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 60u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 28u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 12u, (r1 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 56));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r1 + 148));
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0xE000101B gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x807CE38C func_807CE38C preserves=false fpr_mask=0x38000000
