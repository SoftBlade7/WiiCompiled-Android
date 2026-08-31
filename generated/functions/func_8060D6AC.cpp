#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060D6AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8060D6AC;

loc_8060D6AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = (r3 + 440);
    ctx->lr = 0x8060D6DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E296Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 196));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8060D6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060D770;
    }
}

loc_8060D6EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060D714;
    }
}

loc_8060D6F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8060D6F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060D758;
    }
}

loc_8060D6F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060D708;
    }
}

loc_8060D6FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060D700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060D734;
    }
}

loc_8060D704:
{
    goto loc_8060D784;
}

loc_8060D708:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8060D70C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060D768;
    }
}

loc_8060D710:
{
    goto loc_8060D760;
}

loc_8060D714:
{
}

loc_8060D718:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(37))) {
        goto loc_8060D728;
    }
}

loc_8060D71C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8060D720:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060D778;
    }
}

loc_8060D724:
{
    goto loc_8060D784;
}

loc_8060D728:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_8060D72C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060D784;
    }
}

loc_8060D730:
{
    goto loc_8060D780;
}

loc_8060D734:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8060D744:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060D750;
    }
}

loc_8060D748:
{
    r4 = 5016;
    goto loc_8060D784;
}

loc_8060D750:
{
    r4 = 6061;
    goto loc_8060D784;
}

loc_8060D758:
{
    r4 = 6055;
    goto loc_8060D784;
}

loc_8060D760:
{
    r4 = 6054;
    goto loc_8060D784;
}

loc_8060D768:
{
    r4 = 6056;
    goto loc_8060D784;
}

loc_8060D770:
{
    r4 = 6063;
    goto loc_8060D784;
}

loc_8060D778:
{
    r4 = 6062;
    goto loc_8060D784;
}

loc_8060D780:
{
    r4 = 6064;
}

loc_8060D784:
{
    r3 = (r29 + 68);
    r5 = 0;
    ctx->lr = 0x8060D790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8060D6AC func_8060D6AC preserves=true fpr_mask=0x00000000
