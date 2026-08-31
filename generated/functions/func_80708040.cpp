#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_80708040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_80708040;

loc_80708040:
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
}

loc_80708068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070808C;
    }
}

loc_8070806C:
{
}

loc_80708070:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(270))) {
        goto loc_8070808C;
    }
}

loc_80708074:
{
}

loc_80708078:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(274))) {
        goto loc_8070808C;
    }
}

loc_8070807C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(284));
}

loc_80708080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070808C;
    }
}

loc_80708084:
{
    r3 = 0;
    goto loc_807082BC;
}

loc_8070808C:
{
}

loc_80708090:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(422))) {
        goto loc_807080A0;
    }
}

loc_80708094:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(279));
}

loc_80708098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807080D0;
    }
}

loc_8070809C:
{
    goto loc_807080E4;
}

loc_807080A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807080A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807080B4;
    }
}

loc_807080AC:
{
    r3 = 0;
    goto loc_807082BC;
}

loc_807080B4:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead8((r4 + 76));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807080C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807080E4;
    }
}

loc_807080C8:
{
    r3 = 0;
    goto loc_807082BC;
}

loc_807080D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807080D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807080E4;
    }
}

loc_807080DC:
{
    r3 = 0;
    goto loc_807082BC;
}

loc_807080E4:
{
    r3 = (r3 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_E79 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_E79[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_E79[1]);
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

loc_807080F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807080FC;
    }
}

loc_807080F4:
{
    r31 = 0;
    goto loc_807082B8;
}

loc_807080FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 128), 0, 16u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 128));
    r31 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070812C;
    }
}

loc_8070810C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708118;
    }
}

loc_80708110:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070811C;
}

loc_80708118:
{
    r0 = -1;
}

loc_8070811C:
{
}

loc_80708120:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8070812C;
    }
}

loc_80708124:
{
    r31 = (r29 + 128);
    goto loc_807081AC;
}

loc_8070812C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708134:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708158;
    }
}

loc_80708138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708144;
    }
}

loc_8070813C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80708148;
}

loc_80708144:
{
    r0 = -1;
}

loc_80708148:
{
}

loc_8070814C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80708158;
    }
}

loc_80708150:
{
    r31 = (r29 + 132);
    goto loc_807081AC;
}

loc_80708158:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708184;
    }
}

loc_80708164:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708170;
    }
}

loc_80708168:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80708174;
}

loc_80708170:
{
    r0 = -1;
}

loc_80708174:
{
}

loc_80708178:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80708184;
    }
}

loc_8070817C:
{
    r31 = (r29 + 136);
    goto loc_807081AC;
}

loc_80708184:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070818C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807081AC;
    }
}

loc_80708190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070819C;
    }
}

loc_80708194:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807081A0;
}

loc_8070819C:
{
    r0 = -1;
}

loc_807081A0:
{
}

loc_807081A4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_807081AC;
    }
}

loc_807081A8:
{
    r31 = (r29 + 140);
}

loc_807081AC:
{
}

loc_807081B0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80708294;
    }
}

loc_807081B4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807081BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807081C8;
    }
}

loc_807081C0:
{
    r31 = (r29 + 128);
    goto loc_80708294;
}

loc_807081C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807081D4;
    }
}

loc_807081CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807081D8;
}

loc_807081D4:
{
    r0 = -1;
}

loc_807081D8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807081E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807081F0;
    }
}

loc_807081E8:
{
    r31 = (r29 + 132);
    goto loc_80708294;
}

loc_807081F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807081FC;
    }
}

loc_807081F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80708200;
}

loc_807081FC:
{
    r0 = -1;
}

loc_80708200:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070820C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80708218;
    }
}

loc_80708210:
{
    r31 = (r29 + 136);
    goto loc_80708294;
}

loc_80708218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708224;
    }
}

loc_8070821C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80708228;
}

loc_80708224:
{
    r0 = -1;
}

loc_80708228:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r29 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708234:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80708240;
    }
}

loc_80708238:
{
    r31 = (r29 + 140);
    goto loc_80708294;
}

loc_80708240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070824C;
    }
}

loc_80708244:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80708250;
}

loc_8070824C:
{
    r0 = -1;
}

loc_80708250:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r30;
    r3 = (r29 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x80708268u;
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

loc_8070826C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80708278;
    }
}

loc_80708270:
{
    r31 = 0;
    goto loc_80708294;
}

loc_80708278:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r29 + r0);
    r31 = (r31 + 128);
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708294;
    }
}

loc_8070828C:
{
    r4 = 0;
    ctx->lr = 0x80708294u;
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

loc_80708294:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80708298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807082B4;
    }
}

loc_8070829C:
{
    r3 = r29;
    r4 = r31;
    r5 = r30;
    r6 = 0;
    ctx->lr = 0x807082B0u;
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
    InvokeDirectCpu<0x800A3F90u>(ctx);
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
    goto loc_807082B8;
}

loc_807082B4:
{
    r31 = 0;
}

loc_807082B8:
{
    r3 = r31;
}

loc_807082BC:
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
// RECOMP_REGISTRATION base 0x80708040 func_80708040 preserves=true fpr_mask=0x00000000
