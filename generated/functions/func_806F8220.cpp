#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F8220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F8220;

loc_806F8220:
{
    r7 = (r3 + -917504);
    r9 = 458752;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = (r7 + 22033);
    r0 = (r9 + -25760);
    r8 = 1127219200;
}

loc_806F823C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_806F8388;
    }
}

loc_806F8248:
{
    r7 = (r3 + -1310720);
    r0 = (r9 + -25937);
    r7 = (r7 + -17744);
}

loc_806F8258:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_806F8414;
    }
}

loc_806F825C:
{
    r7 = (r3 + -458752);
    r0 = (r9 + -26554);
    r7 = (r7 + -4520);
}

loc_806F826C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_806F8300;
    }
}

loc_806F8270:
{
    r0 = (r9 + 4520);
    r8 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat64((r8 + 3816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806F8290:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 30832));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F82D4;
    }
}

loc_806F82AC:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r3 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F82D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F849C;
    }
}

loc_806F82D4:
{
}

loc_806F82D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F82E8;
    }
}

loc_806F82DC:
{
    r3 = 917504;
    r0 = (r3 + -22033);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_806F82E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806F82EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F849C;
    }
}

loc_806F82F0:
{
    r3 = 458752;
    r0 = (r3 + 4520);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_806F849C;
}

loc_806F8300:
{
    r0 = (r9 + -26553);
    r8 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r9 + 4520);
    f3.d = MemoryInline::FlatReadFloat64((r8 + 3816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0x808C0000u;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30832));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806F8338:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F835C;
    }
}

loc_806F8354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r6));
}

loc_806F8358:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F849C;
    }
}

loc_806F835C:
{
}

loc_806F8360:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F8370;
    }
}

loc_806F8364:
{
    r3 = 1310720;
    r0 = (r3 + 17744);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_806F8370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806F8374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F849C;
    }
}

loc_806F8378:
{
    r3 = 917504;
    r0 = (r3 + -22033);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_806F849C;
}

loc_806F8388:
{
    r0 = (r9 + -25759);
    r7 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r8 = 917504;
    f3.d = MemoryInline::FlatReadFloat64((r7 + 3816));
    r0 = (r8 + -22033);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0x808C0000u;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30832));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806F83C0:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword2;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F83E8;
    }
}

loc_806F83E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r6));
}

loc_806F83E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F849C;
    }
}

loc_806F83E8:
{
}

loc_806F83EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F83FC;
    }
}

loc_806F83F0:
{
    r3 = 1769472;
    r0 = (r3 + -8192);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_806F83FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806F8400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F849C;
    }
}

loc_806F8404:
{
    r3 = 1310720;
    r0 = (r3 + 17744);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_806F849C;
}

loc_806F8414:
{
    r0 = (r9 + -25936);
    r7 = 0x808A0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r8 = 1310720;
    f3.d = MemoryInline::FlatReadFloat64((r7 + 3816));
    r0 = (r8 + 17744);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0x808C0000u;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30832));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806F844C:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r6 = fctiwzword3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F8474;
    }
}

loc_806F846C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r6));
}

loc_806F8470:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F849C;
    }
}

loc_806F8474:
{
}

loc_806F8478:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F8488;
    }
}

loc_806F847C:
{
    r3 = 458752;
    r0 = (r3 + 4520);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_806F8488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806F848C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F849C;
    }
}

loc_806F8490:
{
    r3 = 1769472;
    r0 = (r3 + -8192);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_806F849C:
{
    r3 = r6;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003CB gpr_return=0x00000008 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F8220 func_806F8220 preserves=true fpr_mask=0x00000000
