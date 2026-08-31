#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001B830(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001B830;

loc_8001B830:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r31 = r3;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000EF7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8001B858:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B868;
    }
}

loc_8001B85C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31248));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8001B864:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001B870;
    }
}

loc_8001B868:
{
    f1.d = f31.d;
    goto loc_8001B984;
}

loc_8001B870:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r4 = (r4_rot_0 & 2047);
}

loc_8001B87C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8001B8C8;
    }
}

loc_8001B880:
{
    r0 = (r5 & 2147483647);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001B894;
    }
}

loc_8001B88C:
{
    f1.d = f31.d;
    goto loc_8001B984;
}

loc_8001B894:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31240));
    r3 = -65536;
    r0 = (r3 + 15536);
    f31.d = (f31.d * f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8001B8A8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f31.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r3 = (r3_rot_1 & 2047);
    r4 = (r3 + -54);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001B8C8;
    }
}

loc_8001B8BC:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31232));
    f1.d = (f0.d * f31.d);
    goto loc_8001B984;
}

loc_8001B8C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2047));
}

loc_8001B8CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001B8D8;
    }
}

loc_8001B8D0:
{
    f1.d = (f31.d + f31.d);
    goto loc_8001B984;
}

loc_8001B8D8:
{
    r4 = (r4 + r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2046));
}

loc_8001B8E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B8FC;
    }
}

loc_8001B8E4:
{
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31224));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31224));
    f1.d = (f0.d * f1.d);
    goto loc_8001B984;
}

loc_8001B8FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8001B900:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B91C;
    }
}

loc_8001B904:
{
    r3 = (r5 & -2146435073);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r0 = (r0_rot_1 & -1048576);
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    goto loc_8001B984;
}

loc_8001B91C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-54));
}

loc_8001B920:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001B964;
    }
}

loc_8001B924:
{
    r3 = 65536;
    r0 = (r3 + -15536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8001B930:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001B94C;
    }
}

loc_8001B934:
{
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31224));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31224));
    f1.d = (f0.d * f1.d);
    goto loc_8001B984;
}

loc_8001B94C:
{
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31232));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31232));
    f1.d = (f0.d * f1.d);
    goto loc_8001B984;
}

loc_8001B964:
{
    r0 = (r4 + 54);
    r3 = (r5 & -2146435073);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r0 = (r0_rot_2 & -1048576);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31216));
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = (f1.d * f0.d);
}

loc_8001B984:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003F gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001B830 func_8001B830 preserves=false fpr_mask=0x80000000
