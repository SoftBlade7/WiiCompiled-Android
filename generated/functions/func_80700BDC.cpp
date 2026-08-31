#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_80700BDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80700BDC;

loc_80700BDC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80700C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700C10;
    }
}

loc_80700C08:
{
    r3 = 0;
    goto loc_80700D30;
}

loc_80700C10:
{
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_710 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_710[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_710[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80700C1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700C28;
    }
}

loc_80700C20:
{
    r31 = 0;
    goto loc_80700D2C;
}

loc_80700C28:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80700C30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80700C3C;
    }
}

loc_80700C34:
{
    r31 = (r29 + 128);
    goto loc_80700D08;
}

loc_80700C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700C48;
    }
}

loc_80700C40:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80700C4C;
}

loc_80700C48:
{
    r0 = -1;
}

loc_80700C4C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80700C58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80700C64;
    }
}

loc_80700C5C:
{
    r31 = (r29 + 132);
    goto loc_80700D08;
}

loc_80700C64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700C70;
    }
}

loc_80700C68:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80700C74;
}

loc_80700C70:
{
    r0 = -1;
}

loc_80700C74:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80700C80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80700C8C;
    }
}

loc_80700C84:
{
    r31 = (r29 + 136);
    goto loc_80700D08;
}

loc_80700C8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700C98;
    }
}

loc_80700C90:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80700C9C;
}

loc_80700C98:
{
    r0 = -1;
}

loc_80700C9C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80700CA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80700CB4;
    }
}

loc_80700CAC:
{
    r31 = (r29 + 140);
    goto loc_80700D08;
}

loc_80700CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700CC0;
    }
}

loc_80700CB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80700CC4;
}

loc_80700CC0:
{
    r0 = -1;
}

loc_80700CC4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r30;
    r3 = (r29 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x80700CDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80702848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80700CE0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80700CEC;
    }
}

loc_80700CE4:
{
    r31 = 0;
    goto loc_80700D08;
}

loc_80700CEC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r29 + r0);
    r31 = (r31 + 128);
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80700CFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700D08;
    }
}

loc_80700D00:
{
    r4 = 0;
    ctx->lr = 0x80700D08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80700D08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80700D0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80700D28;
    }
}

loc_80700D10:
{
    r3 = r29;
    r4 = r31;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x80700D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80700D2C;
}

loc_80700D28:
{
    r31 = 0;
}

loc_80700D2C:
{
    r3 = r31;
}

loc_80700D30:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80700BDC func_80700BDC preserves=true fpr_mask=0x00000000
