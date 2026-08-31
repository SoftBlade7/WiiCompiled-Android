#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AA3AC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801AA3AC;

loc_801AA3AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r31 + 714));
    r30 = r3;
    r0 = (r0 & 1);
}

loc_801AA3DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AA458;
    }
}

loc_801AA3E0:
{
    r0 = MemoryInline::FlatRead16((r31 + 712));
}

loc_801AA3E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_801AA458;
    }
}

loc_801AA3EC:
{
    r0 = MemoryInline::FlatRead32((r31 + 744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA3F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA458;
    }
}

loc_801AA3F8:
{
    r3 = (r31 + 744);
    ctx->lr = 0x801AA400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AA9B8u>(ctx);
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
    r0 = MemoryInline::FlatRead16((r31 + 712));
}

loc_801AA408:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AA414;
    }
}

loc_801AA40C:
{
    r0 = 0;
    goto loc_801AA440;
}

loc_801AA414:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 220));
    goto loc_801AA434;
}

loc_801AA420:
{
}

loc_801AA424:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r3))) {
        goto loc_801AA430;
    }
}

loc_801AA428:
{
    r0 = 1;
    goto loc_801AA440;
}

loc_801AA430:
{
    r3 = MemoryInline::FlatRead32((r3 + 764));
}

loc_801AA434:
{
}

loc_801AA438:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AA420;
    }
}

loc_801AA43C:
{
    r0 = 0;
}

loc_801AA440:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA458;
    }
}

loc_801AA448:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801AA4D0;
}

loc_801AA458:
{
    r0 = MemoryInline::FlatRead16((r31 + 712));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801AA460:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA4C4;
    }
}

loc_801AA464:
{
}

loc_801AA468:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801AA474;
    }
}

loc_801AA46C:
{
    r0 = MemoryInline::FlatRead32((r31 + 728));
    MemoryInline::FlatWrite32(r29, r0);
}

loc_801AA474:
{
    r4 = MemoryInline::FlatRead32((r31 + 764));
    r5 = MemoryInline::FlatRead32((r31 + 768));
}

loc_801AA480:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA490;
    }
}

loc_801AA484:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 224), r5);
    goto loc_801AA494;
}

loc_801AA490:
{
    MemoryInline::FlatWrite32((r4 + 768), r5);
}

loc_801AA494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801AA498:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA4A8;
    }
}

loc_801AA49C:
{
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 220), r4);
    goto loc_801AA4AC;
}

loc_801AA4A8:
{
    MemoryInline::FlatWrite32((r5 + 764), r4);
}

loc_801AA4AC:
{
    r0 = 0;
    r3 = r30;
    MemoryInline::FlatWrite16((r31 + 712), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
    goto loc_801AA4D0;
}

loc_801AA4C4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
}

loc_801AA4D0:
{
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
// RECOMP_REGISTRATION base 0x801AA3AC func_801AA3AC preserves=true fpr_mask=0x00000000
