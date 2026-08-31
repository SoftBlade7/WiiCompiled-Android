#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F2948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F2948;

loc_805F2948:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_805F2954:
{
    r6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2970;
    }
}

loc_805F2968:
{
    r3 = -1;
    goto loc_805F2C50;
}

loc_805F2970:
{
    r0 = (r5 & 1);
}

loc_805F2974:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F29C0;
    }
}

loc_805F2978:
{
    f4.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_805F2984:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F29B8;
    }
}

loc_805F298C:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F299C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F29B8;
    }
}

loc_805F29A4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F29B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2A14;
    }
}

loc_805F29B8:
{
    r3 = -1;
    goto loc_805F2C50;
}

loc_805F29C0:
{
    r0 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F29C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2A14;
    }
}

loc_805F29C8:
{
    f5.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_805F29D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2A0C;
    }
}

loc_805F29DC:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F29F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2A0C;
    }
}

loc_805F29F8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2A04:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2A14;
    }
}

loc_805F2A0C:
{
    r3 = -1;
    goto loc_805F2C50;
}

loc_805F2A14:
{
    r0 = (r5 & 4);
}

loc_805F2A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F2A68;
    }
}

loc_805F2A1C:
{
    f5.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_805F2A28:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2A60;
    }
}

loc_805F2A30:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2A44:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2A60;
    }
}

loc_805F2A4C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2A58:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2ABC;
    }
}

loc_805F2A60:
{
    r3 = -1;
    goto loc_805F2C50;
}

loc_805F2A68:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F2A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2ABC;
    }
}

loc_805F2A70:
{
    f5.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_805F2A7C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2AB4;
    }
}

loc_805F2A84:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2A98:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2AB4;
    }
}

loc_805F2AA0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2AAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2ABC;
    }
}

loc_805F2AB4:
{
    r3 = -1;
    goto loc_805F2C50;
}

loc_805F2ABC:
{
    r3 = (r1 + 8);
    r4 = (r4 + 16);
    r5 = (r6 + 16);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(10));
}

loc_805F2AD0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2C4C;
    }
}

loc_805F2AD4:
{
    r3 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -26180);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805F2C4Cu:
        goto loc_805F2C4C;
        break;
    case 0x805F2AECu:
        goto loc_805F2AEC;
        break;
    case 0x805F2B3Cu:
        goto loc_805F2B3C;
        break;
    case 0x805F2B8Cu:
        goto loc_805F2B8C;
        break;
    case 0x805F2BECu:
        goto loc_805F2BEC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805F2AEC:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2AFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2B04;
    }
}

loc_805F2B00:
{
    goto loc_805F2B08;
}

loc_805F2B04:
{
    f1.d = (-(f1.d));
}

loc_805F2B08:
{
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2B18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2B20;
    }
}

loc_805F2B1C:
{
    goto loc_805F2B24;
}

loc_805F2B20:
{
    f2.d = (-(f2.d));
}

loc_805F2B24:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23936));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_805F2C50;
}

loc_805F2B3C:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2B4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2B54;
    }
}

loc_805F2B50:
{
    goto loc_805F2B58;
}

loc_805F2B54:
{
    f1.d = (-(f1.d));
}

loc_805F2B58:
{
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2B68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2B70;
    }
}

loc_805F2B6C:
{
    goto loc_805F2B74;
}

loc_805F2B70:
{
    f2.d = (-(f2.d));
}

loc_805F2B74:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23936));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_805F2C50;
}

loc_805F2B8C:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F2BA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2BAC;
    }
}

loc_805F2BA8:
{
    goto loc_805F2BB0;
}

loc_805F2BAC:
{
    f3.d = (-(f3.d));
}

loc_805F2BB0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2BC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2BD0;
    }
}

loc_805F2BCC:
{
    goto loc_805F2BD4;
}

loc_805F2BD0:
{
    f1.d = (-(f1.d));
}

loc_805F2BD4:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23936));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_805F2C50;
}

loc_805F2BEC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805F2C04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2C0C;
    }
}

loc_805F2C08:
{
    goto loc_805F2C10;
}

loc_805F2C0C:
{
    f3.d = (-(f3.d));
}

loc_805F2C10:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2C28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2C30;
    }
}

loc_805F2C2C:
{
    goto loc_805F2C34;
}

loc_805F2C30:
{
    f1.d = (-(f1.d));
}

loc_805F2C34:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23936));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_805F2C50;
}

loc_805F2C4C:
{
    r3 = -1;
}

loc_805F2C50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F2948 func_805F2948 preserves=true fpr_mask=0x00000000
