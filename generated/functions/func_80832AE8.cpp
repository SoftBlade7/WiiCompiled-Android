#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80832AE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80832AE8;

loc_80832AE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808E0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 16;
    r5 = (r5 + -29568);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWrite32(r3, r5);
    r5 = 0x809C0000u;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 76), r6);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 74), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 440));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80832B34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80832B70;
    }
}

loc_80832B38:
{
    r3 = 108;
    ctx->lr = 0x80832B40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x808447CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2560));
    r3 = 108;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r31 + 72), static_cast<uint16_t>(r0));
    ctx->lr = 0x80832B5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x808447CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 2564));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r31 + 74), static_cast<uint16_t>(r0));
}

loc_80832B70:
{
    r3 = MemoryInline::FlatRead16((r31 + 72));
    r4 = 0x809C0000u;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r7 = 12;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -13656));
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r5 = -1;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = 2;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r8 = MemoryInline::FlatRead16((r31 + 74));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 1020));
    r4 = 1;
    r3 = 352;
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r7));
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::FlatWrite32((r31 + 8), r6);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r7 = fctiwzword2;
    MemoryInline::FlatWrite32((r31 + 12), r5);
    r10 = (r7 & 65535);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(30));
    r7 = (r7_rot_0 & -1073741824);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r6));
    r7 = (r7 - r9);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -1);
    MemoryInline::FlatWrite8((r31 + 17), static_cast<uint8_t>(r6));
    r7 = (r7 + r9);
    r7 = (r10 - r7);
    MemoryInline::FlatWrite16((r31 + 72), static_cast<uint16_t>(r7));
    r9 = (r7 & 65535);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(30));
    r7 = (r7_rot_2 & -1073741824);
    MemoryInline::FlatWrite8((r31 + 18), static_cast<uint8_t>(r4));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r7 = (r7 - r9);
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r6));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -1);
    r7 = (r7 + r9);
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r7 = (r8 - r7);
    MemoryInline::FlatWrite32((r31 + 24), r6);
    MemoryInline::FlatWrite32((r31 + 28), r5);
    MemoryInline::FlatWrite16((r31 + 74), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 33), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 34), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 35), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r31 + 36), r0);
    MemoryInline::FlatWrite32((r31 + 40), r6);
    MemoryInline::FlatWrite32((r31 + 44), r5);
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 49), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r31 + 52), r0);
    MemoryInline::FlatWrite32((r31 + 56), r6);
    MemoryInline::FlatWrite32((r31 + 60), r5);
    MemoryInline::FlatWrite8((r31 + 64), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 65), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r31 + 68), r0);
    ctx->lr = 0x80832C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80830000u;
    r5 = 0x80830000u;
    r4 = (r4 + 11452);
    r6 = 28;
    r5 = (r5 + 11456);
    r7 = 12;
    ctx->lr = 0x80832CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 84), r3);
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80832AE8 func_80832AE8 preserves=true fpr_mask=0x00000000
