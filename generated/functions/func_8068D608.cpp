#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8068D608(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8068D608;

loc_8068D608:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::FlatRead8((r3 + 51));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068D61C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068D738;
    }
}

loc_8068D620:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
}

loc_8068D628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8068D6B4;
    }
}

loc_8068D62C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8068D630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068D648;
    }
}

loc_8068D634:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8068D638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068D66C;
    }
}

loc_8068D63C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8068D640:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068D690;
    }
}

loc_8068D644:
{
    goto loc_8068D738;
}

loc_8068D648:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 68);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    r3 = (r3 + 181);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    ctx->lr = 0x8068D668u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068D738;
}

loc_8068D66C:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 56);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    r3 = (r3 + 192);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f1.d);
    ctx->lr = 0x8068D68Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068D738;
}

loc_8068D690:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 44);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    r3 = (r3 + 203);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    ctx->lr = 0x8068D6B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068D738;
}

loc_8068D6B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8068D6B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068D6D0;
    }
}

loc_8068D6BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8068D6C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068D6F4;
    }
}

loc_8068D6C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8068D6C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8068D718;
    }
}

loc_8068D6CC:
{
    goto loc_8068D738;
}

loc_8068D6D0:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    r3 = (r3 + 215);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    ctx->lr = 0x8068D6F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068D738;
}

loc_8068D6F4:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    r3 = (r3 + 227);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    ctx->lr = 0x8068D714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068D738;
}

loc_8068D718:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    r3 = (r3 + 239);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    ctx->lr = 0x8068D738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8068D738:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8068D608 func_8068D608 preserves=true fpr_mask=0x00000000
