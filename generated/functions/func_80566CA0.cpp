#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80566CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80566CA0;

loc_80566CA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    r4 = MemoryInline::FlatRead32((r3 + 264));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80566CBC:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80566CD0;
    }
}

loc_80566CC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80566CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80566D38;
    }
}

loc_80566CCC:
{
    goto loc_80566D48;
}

loc_80566CD0:
{
    r4 = 0x80380000u;
    r6 = 0x802A0000u;
    r7 = MemoryInline::FlatRead32((r4 + 28432));
    r4 = 0x80890000u;
    r5 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r7 = (r7 * 12);
    r6 = (r6 + 16104);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 5416));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 5424));
    r4 = (r6 + r7);
    r6_addr_2 = (r6 + r7);
    r5 = MemoryInline::FlatRead16(r6_addr_2);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    goto loc_80566DAC;
}

loc_80566D38:
{
    r4 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r4 + 19440));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80566E38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80566DAC;
}

loc_80566D48:
{
    r4 = 0x80380000u;
    r6 = 0x802A0000u;
    r7 = MemoryInline::FlatRead32((r4 + 28432));
    r4 = 0x80890000u;
    r5 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r7 = (r7 * 12);
    r6 = (r6 + 16104);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 5416));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 5424));
    r4 = (r6 + r7);
    r6_addr_0 = (r6 + r7);
    r5 = MemoryInline::FlatRead16(r6_addr_0);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_80566DAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80566CA0 func_80566CA0 preserves=true fpr_mask=0x00000000
