#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061AC4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061AC4C;

loc_8061AC4C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80000000u;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 31472);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 60));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    f1.d = MemoryInline::FlatReadFloat64((r31 + 24));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 1);
    r0 = (r4 + -1);
    r4 = (0 - r5);
    r9 = (r0 & r4);
    r0 = 1127219200;
    ctr = r7;
}

loc_8061ACA8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8061AD04;
    }
}

loc_8061ACAC:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r4_addr_2 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r5 = MemoryInline::FlatRead32((r4 + 372));
}

loc_8061ACBC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8061ACFC;
    }
}

loc_8061ACC0:
{
}

loc_8061ACC4:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(2))) {
        goto loc_8061ACFC;
    }
}

loc_8061ACC8:
{
    r5 = MemoryInline::FlatRead32((r4 + 388));
}

loc_8061ACD0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8061ACFC;
    }
}

loc_8061ACD4:
{
    r4 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r9));
}

loc_8061ACE0:
{
    r8 = (r8 + 1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061ACFC;
    }
}

loc_8061ACF8:
{
    r9 = r5;
}

loc_8061ACFC:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8061ACAC;
    }
}

loc_8061AD04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8061AD08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061AD48;
    }
}

loc_8061AD0C:
{
    r4 = 1127219200;
    r0 = (r8 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r9 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 24));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_8061AD48:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80619FE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 60));
    r6 = 0;
    r7 = 0;
    r4 = 0;
    ctr = r0;
}

loc_8061AD68:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8061AD98;
    }
}

loc_8061AD6C:
{
    r5 = MemoryInline::FlatRead32((r30 + 52));
    r5_addr_2 = (r5 + r4);
    r3 = MemoryInline::FlatRead32(r5_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 372));
}

loc_8061AD7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_8061AD8C;
    }
}

loc_8061AD80:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_3 = (r5 + r0);
    r6 = MemoryInline::FlatRead32(r5_addr_3);
    goto loc_8061AD98;
}

loc_8061AD8C:
{
    r4 = (r4 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8061AD6C;
    }
}

loc_8061AD98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8061AD9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061ADE4;
    }
}

loc_8061ADA0:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 72));
    r3 = 6029312;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    r3 = (r3 + -29313);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8061ADD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061ADE0;
    }
}

loc_8061ADD8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8061ADE0:
{
    MemoryInline::FlatWrite32((r6 + 388), r3);
}

loc_8061ADE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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

// RECOMP_GUEST_ABI gpr_read=0xC00003FB gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8061AC4C func_8061AC4C preserves=true fpr_mask=0x00000000
