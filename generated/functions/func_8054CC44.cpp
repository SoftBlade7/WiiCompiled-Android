#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054CC44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8054CD58_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8054CC44;

loc_8054CC44:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r3 + 44);
}

loc_8054CC58:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = r6;
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8054CC90;
    }
}

loc_8054CC7C:
{
    r0 = MemoryInline::FlatRead8((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054CC84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054CC90;
    }
}

loc_8054CC88:
{
    r3 = 0;
    goto loc_8054CE0C;
}

loc_8054CC90:
{
}

loc_8054CC94:
{
    r5 = 0;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8054CCB4;
    }
}

loc_8054CC9C:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8054CCAC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8054CCB4;
    }
}

loc_8054CCB0:
{
    r5 = 1;
}

loc_8054CCB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8054CCB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054CCD0;
    }
}

loc_8054CCBC:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8054CCD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8054CCD0:
{
    r3 = 0x809C0000u;
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r29 = (r29_rot_1 & -4);
    r3 = (r3 + 6248);
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_1 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8054CCF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054CD08;
    }
}

loc_8054CCF8:
{
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_8054CD08:
{
    f2.d = MemoryInline::FlatReadFloat32(r28);
    r4 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    r5 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    r7 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r6 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8054CD44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80566FC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8054CD48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054CE08;
    }
}

loc_8054CD4C:
{
    r3 = MemoryInline::FlatRead32((r30 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8054CD54:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    addr_lfsx_8054CD58_loc_0 = (r3 + r29);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8054CD58_loc_0);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054CD7C;
    }
}

loc_8054CD68:
{
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_8054CD7C:
{
    r3 = 0x80890000u;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 3748));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8054CD8C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054CE08;
    }
}

loc_8054CD94:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8054CD9C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054CE08;
    }
}

loc_8054CDA4:
{
    r3 = 0x80380000u;
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 28432));
    r3 = 0x80890000u;
    r0 = 1127219200;
    r4 = (r4 + 16104);
    r5 = (r5 * 12);
    f1.d = MemoryInline::FlatReadFloat64((r3 + 3760));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r4_addr_1 = (r4 + r5);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8054CDDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054CE08;
    }
}

loc_8054CDE0:
{
    r3 = (r4 + r5);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8054CDFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054CE08;
    }
}

loc_8054CE00:
{
    r3 = 1;
    goto loc_8054CE0C;
}

loc_8054CE08:
{
    r3 = 0;
}

loc_8054CE0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054CC44 func_8054CC44 preserves=true fpr_mask=0x00000000
