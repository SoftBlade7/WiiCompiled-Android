#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FA2AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806FA338_loc_0 = 0;
    uint32_t addr_lfsx_806FA39C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FA2AC;

loc_806FA2AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWrite32((r3 + 464), r4);
    MemoryInline::FlatWrite8((r3 + 468), static_cast<uint8_t>(r6));
    r4 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r7 + 10392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806FA2E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 256));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA2F8;
    }
}

loc_806FA2F0:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_806FA2FC;
}

loc_806FA2F8:
{
    r4 = -1;
}

loc_806FA2FC:
{
    ctx->lr = 0x806FA300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806FA304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA314;
    }
}

loc_806FA308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806FA30C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA378;
    }
}

loc_806FA310:
{
    goto loc_806FA3DC;
}

loc_806FA314:
{
    r4 = MemoryInline::FlatRead32((r30 + 464));
    r3 = (r1 + 12);
    ctx->lr = 0x806FA320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009ACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 0;
    r29 = 1;
    goto loc_806FA35C;
}

loc_806FA32C:
{
    r4 = (r28 & 255);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & 1020);
    r0 = (r4 * 28);
    addr_lfsx_806FA338_loc_0 = (r31 + r3);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_806FA338_loc_0);
    r3 = (r30 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FA34C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA358;
    }
}

loc_806FA350:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    ctx->lr = 0x806FA358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009AA30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FA358:
{
    r28 = (r28 + 1);
}

loc_806FA35C:
{
    r0 = MemoryInline::FlatRead8((r30 + 468));
    r3 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_806FA368:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FA32C;
    }
}

loc_806FA36C:
{
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009ADC0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_806FA3DC;
}

loc_806FA378:
{
    r4 = MemoryInline::FlatRead32((r30 + 464));
    r3 = (r1 + 8);
    ctx->lr = 0x806FA384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A8DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 0;
    r29 = 1;
    goto loc_806FA3C4;
}

loc_806FA390:
{
    r4 = (r28 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r0 = (r4 * 28);
    addr_lfsx_806FA39C_loc_0 = (r31 + r3);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_806FA39C_loc_0);
    r3 = (r30 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FA3B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FA3C0;
    }
}

loc_806FA3B4:
{
    r4 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r5 = 0;
    ctx->lr = 0x806FA3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A8A00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_806FA3C0:
{
    r28 = (r28 + 1);
}

loc_806FA3C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 468));
    r3 = (r28 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_806FA3D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FA390;
    }
}

loc_806FA3D4:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A8EF0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_806FA3DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FA2AC func_806FA2AC preserves=true fpr_mask=0x00000000
