#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A65EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806A65EC;

loc_806A65EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 7));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A65F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806A65F8:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 8656));
    r0 = MemoryInline::FlatRead8((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A6608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806A660C:
{
    r0 = MemoryInline::FlatRead8((r3 + 297));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A6614:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A661C;
    }
}

loc_806A6618:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_806A661C:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_806A6624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A6658;
    }
}

loc_806A6628:
{
    r0 = MemoryInline::FlatRead8((r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A6630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A6648;
    }
}

loc_806A6634:
{
    r6 = 0x808A0000u;
    r5 = (r3 + 1836);
    r6 = (r6 + -10364);
    r3 = (r6 + 6080);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_806A6648:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -10364);
    r3 = (r3 + 6088);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5AC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_806A6658:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_806A6660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A6670;
    }
}

loc_806A6664:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A666C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_806A6670:
{
    r0 = MemoryInline::FlatRead8((r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A6678:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A6690;
    }
}

loc_806A667C:
{
    r6 = 0x808A0000u;
    r5 = (r3 + 1836);
    r6 = (r6 + -10364);
    r3 = (r6 + 6096);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_806A6690:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -10364);
    r3 = (r3 + 6105);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5AC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A65EC func_806A65EC preserves=true fpr_mask=0x00000000
