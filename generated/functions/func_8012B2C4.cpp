#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B2C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012B2C4;

loc_8012B2C4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8012B2F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012B2FC;
    }
}

loc_8012B2F4:
{
    r3 = 0;
    goto loc_8012B45C;
}

loc_8012B2FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27188));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012B308:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B31C;
    }
}

loc_8012B30C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27184));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012B314:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012B324;
    }
}

loc_8012B31C:
{
    r3 = 0;
    goto loc_8012B45C;
}

loc_8012B324:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012B32C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B338;
    }
}

loc_8012B330:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012B334:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012B340;
    }
}

loc_8012B338:
{
    r3 = 0;
    goto loc_8012B45C;
}

loc_8012B340:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012B348:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B354;
    }
}

loc_8012B34C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012B350:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012B35C;
    }
}

loc_8012B354:
{
    r3 = 0;
    goto loc_8012B45C;
}

loc_8012B35C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 92));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012B364:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B370;
    }
}

loc_8012B368:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012B36C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012B378;
    }
}

loc_8012B370:
{
    r3 = 0;
    goto loc_8012B45C;
}

loc_8012B378:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27192));
    f1.d = PpcFmulsInline(f0.d, f3.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8012B388:
{
    MemoryInline::FlatWrite32((r28 + 20), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012B398;
    }
}

loc_8012B390:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r28 + 20), r0);
}

loc_8012B398:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27180));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27184));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27176));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWrite32((r28 + 16), r0);
    f1.d = PPC_Fctiwz(f3.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8012B3C4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r28 + 28), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012B3D8;
    }
}

loc_8012B3D4:
{
    f2.d = f0.d;
}

loc_8012B3D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27180));
    r30 = r28;
    r29 = 0;
    r31 = 0;
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 48), r0);
}

loc_8012B3FC:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r4 = 0;
    r3 = MemoryInline::FlatRead32(r30);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    ctx->lr = 0x8012B410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    MemoryInline::FlatWrite32((r30 + 32), r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
}

loc_8012B41C:
{
    r30 = (r30 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B3FC;
    }
}

loc_8012B424:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27180));
    r3 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 92));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword1;
    r0 = fctiwzword2;
    MemoryInline::FlatWrite32((r28 + 52), r4);
    MemoryInline::FlatWrite32((r28 + 56), r0);
}

loc_8012B45C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FF gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012B2C4 func_8012B2C4 preserves=true fpr_mask=0x00000000
